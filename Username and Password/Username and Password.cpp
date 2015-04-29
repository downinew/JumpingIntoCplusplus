// Username and Password.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	string userA = "BillyMadison";
	string userAPassword = "thepenguinisntreal";

	string userB = "HappyGilmore";
	string userBPassword = "Imahockeyplayer";

	string userInput;
	string userPassword;

	cout << "Username: ";
	cin >> userInput;

	cout << "Password: ";
	cin >> userPassword;

	cout << "\n";

	if ((userInput == userA && userPassword == userAPassword) || (userInput == userB && userPassword == userBPassword)){
		cout << "Access Granted" << "\n" << "\n";
	}
	else {
		cout << "Access Denied" << "\n" << "\n";
	}
	system("pause");
}

