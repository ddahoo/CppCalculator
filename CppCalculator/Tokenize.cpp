#include "Tokenize.h"

using namespace std;

vector<Token> Tokenize(vector<char>& Tokens)
{
	vector<Token> tokens;
	for (int i = 0; i < static_cast<int>(Tokens.size()); i++)
	{
		Token t;
		if (Tokens[i] == '+' | Tokens[i] == '-')
		{
			t.symbol = Tokens[i];
			t.Operator;
			t.precedence = 1;
			t.Left;
			tokens.push_back(t);
		}
		else if (Tokens[i] == '*' | Tokens[i] == '/')
		{
			t.symbol = Tokens[i];
			t.Operator;
			t.precedence = 2;
			t.Left;
			tokens.push_back(t);
		}
		else if (Tokens[i] == '(')
		{
			t.symbol = Tokens[i];
			t.LeftParenthesis;
			t.precedence = 4;
			t.None;
			tokens.push_back(t);
		}
		else if (Tokens[i] == ')')
		{
			t.symbol = Tokens[i];
			t.RightParenthesis;
			t.precedence = 4;
			t.None;
			tokens.push_back(t);
		}
		else
		{
			t.number = static_cast<int>(Tokens[i]);
			t.Number;
			t.None;
			tokens.push_back(t);
		}
	}
	return tokens;
}