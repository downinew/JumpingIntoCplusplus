// Small Calculator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	float number;
	float number1;
	string operation;

	cout << "Please enter a number: ";
	cin >> number;
	cout << "\n";

	cout << "Please enter an operation: ";
	cin >> operation;
	cout << "\n";
	
	cout << "Please enter a second number: ";
	cin >> number1;
	cout << "\n";

	if (operation == "+"){
		cout << "Your new number is: " << number + number1 << "\n" << "\n";
	}
	else if (operation == "-"){
		cout << "Your new number is: " << number - number1 << "\n" << "\n";
	}
	else if (operation == "/"){
		cout << "Your new number is: " << number / number1 << "\n" << "\n";
	}
	else if (operation == "*"){
		cout << "Your new number is: " << number * number1 << "\n" << "\n";
	}
	else{
		cout << "Entered an invalid operation: run again.";
	}

	

	system("pause");
}

