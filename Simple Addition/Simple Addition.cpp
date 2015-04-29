// Simple Addition.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{

	int number1;
	int number2;


	cout << "Please enter a number: ";
	cin >> number1;
	cout << "\n" << "Please enter another number: ";
	cin >> number2;

	cout << "\n" << "The combined total is: " << number1 + number2 << "\n" << "\n";

	system("pause");
}

