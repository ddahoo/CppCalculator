#pragma once
class Token {

public:
	int number;
	char symbol;
	int precedence;
	enum TokenType {
		Number,
		Operator,
		LeftParenthesis,
		RightParenthesis
	} ;
	enum Associativity {
		Left,
		Right,
		None
	} ;
	enum TokenType type;
	enum Associativity assoc;
};