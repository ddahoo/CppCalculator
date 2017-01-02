// CppCalculator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include <cstddef>
#include "Tokenize.h"


using namespace std;

string expression;

// TODO
/* We need to improve this function so that decimal number can be recognized
   and dealt with. With this current function, the decimal will be considered as separate characters.*/

vector<char> SplitChars(string& expression)
{
	vector<char> v;
	int i = 0;
	while (i < expression.length())
	{
		size_t found = expression.find_first_of("()*/+-", i);
		if (found < expression.length())
		{
			if (found != 0)
			{
				expression.insert(found, " ");
			}			
			expression.insert(found + 2, " ");
			i = found + 2;
		}
		else
		{
			break;
		}
	}
	copy(expression.begin(), expression.end(), back_inserter(v));
	return v;
}

void EvalExpression(string& expression)
{
	auto tokens = SplitChars(expression);
	auto tokenizedTokens = Tokenize(tokens);
	
}

int main()
{
	cout << "Enter an expression:" << endl;
	getline(cin, expression);
	cout << "Evaluating expression..." << endl;
	EvalExpression(expression);
    return 0;
}

