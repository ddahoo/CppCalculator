#include "Tokenize.h"

using namespace std;

vector<Token> Tokenize(vector<char>& Tokens)
{
	vector<Token> tokens;
	for (int i = 0; i < static_cast<int>(Tokens.size()); i++)
	{
		Token t;
		if (Tokens[i] == '+' || Tokens[i] == '-')
		{
			t.symbol = Tokens[i];
			t.type = Token::TokenType::Operator;
			t.precedence = 1;
			t.assoc = Token::Associativity::Left;
			tokens.push_back(t);
		}
		else if (Tokens[i] == '*' || Tokens[i] == '/')
		{
			t.symbol = Tokens[i];
			t.type = Token::TokenType::Operator;
			t.precedence = 2;
			t.assoc = Token::Associativity::Left;
			tokens.push_back(t);
		}
		else if (Tokens[i] == '(')
		{
			t.symbol = Tokens[i];
			t.type = Token::TokenType::LeftParenthesis;
			t.precedence = 4;
			t.assoc = Token::Associativity::None;
			tokens.push_back(t);
		}
		else if (Tokens[i] == ')')
		{
			t.symbol = Tokens[i];
			t.type = Token::TokenType::RightParenthesis;
			t.precedence = 4;
			t.assoc = Token::Associativity::None;
			tokens.push_back(t);
		}
		else
		{
			t.number = static_cast<int>(Tokens[i]);
			t.type = Token::TokenType::Number;
			t.assoc = Token::Associativity::None;
			tokens.push_back(t);
		}
	}
	return tokens;
}