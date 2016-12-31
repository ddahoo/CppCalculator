#pragma once
class Token {

public:
	int number;
	char symbol;
	int precedence;
	enum Type {
		Number,
		Operator,
		LeftParenthesis,
		RightParenthesis
	} type;
	enum Associativity {
		Left,
		Right,
		None
	} assoc;

};