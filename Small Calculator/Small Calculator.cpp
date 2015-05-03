// Small Calculator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int add(float x, float y);
int divide(float x, float y);
int subtract(float x, float y); 
int mulitply(float x, float y);


int _tmain(int argc, _TCHAR* argv[])
{
	float x;
	float y;
	string operation;

	cout << "Please enter a number: ";
	cin >> x;
	cout << "\n";

	cout << "Please enter an operation: ";
	cin >> operation;
	cout << "\n";
	
	cout << "Please enter a second number: ";
	cin >> y;
	cout << "\n";

	if (operation == "+"){
		cout << "Your new number is: " << add(x , y) << "\n" << "\n";
	}
	else if (operation == "-"){
		cout << "Your new number is: " << subtract(x, y) << "\n" << "\n";
	}
	else if (operation == "/"){
		cout << "Your new number is: " << divide(x,y) << "\n" << "\n";
	}
	else if (operation == "*"){
		cout << "Your new number is: " << mulitply(x,y) << "\n" << "\n";
	}
	else{
		cout << "Entered an invalid operation: run again." << "\n" << "\n";
	}

	

	system("pause");
}

int add(float x, float y){
	
	return x + y;

}

int subtract(float x, float y){

	return x - y;

}

int divide(float x, float y){

	return x / y;

}

int mulitply(float x, float y){

	return x * y;

}
