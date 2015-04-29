// UserAgeComparison.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{

	float number1;
	float number2;


	cout << "Please enter a users age: ";
	cin >> number1;
	cout << "\n" << "Please enter a different users age: ";
	cin >> number2;

	if (number1 > number2 && number1 != number2){
		cout << "\n" << "The first user is older than the second." << "\n" << "\n";
	}
	else if (number2 > number1 && number1 != number2)
	{
		cout << "\n" << "The second user is older than the first." << "\n" << "\n";
	}
	else
	{
		cout << "\n" << "The users are the same age." << "\n" << "\n";
	}

	system("pause");


}

