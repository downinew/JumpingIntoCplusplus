// Simple Password.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	
	int password = 1234;
	int secondPassword = 5678;
	int userInput;


	cout << "Please enter a password:";

	cin >> userInput;

	if (userInput == password || userInput == secondPassword){
		cout << "\n";
		cout << "\n";
		cout << "Password Accepted!";
		cout << "\n";
		cout << "\n";
	}
	else
	{
		cout << "\n";
		cout << "\n";
		cout << "Password Denied!";
		cout << "\n";
		cout << "\n";
	}

	system("pause");
}

