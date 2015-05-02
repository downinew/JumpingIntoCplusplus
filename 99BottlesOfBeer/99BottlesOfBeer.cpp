// 99BottlesOfBeer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>


using namespace std;



int _tmain(int argc, _TCHAR* argv[])
{

	string bottlesOnTheWall = " Bottles of Beer on the wall!";
	string bottlesOfBeer = " Bottles of Beer!";
	string takeOne = "Take one down, pass it around,";
	int beer = 99;
	
	cout << "\n";

	while (beer >= 0){
		cout << "\n";
		cout <<  beer << bottlesOnTheWall << "\n";
		cout <<  beer << bottlesOfBeer << "\n";
		cout << takeOne << "\n";
		cout <<  beer - 1 << bottlesOnTheWall << "\n";

		beer--;
	}

	system("pause");

	
}

