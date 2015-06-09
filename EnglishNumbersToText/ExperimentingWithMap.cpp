#include <iostream>
#include <string>
#include <map>

using namespace std;


int main()
{
	map<int, string> numberMap;

	numberMap[1] = "one";
	numberMap[2] = "two";
	
	int userInput;

	cout << "Please enter a number: ";
	cin >> userInput;
	cout << "\n";
	cout << numberMap.find(userInput)->first << "\n";



	system("pause");
}