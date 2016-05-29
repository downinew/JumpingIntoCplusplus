#include <iostream>
#include <string>


using namespace std;


struct Person{
	string name;
	string phoneNumber;
	string address; 
};


string name = "Enter a name: ";
string phoneNumber = "Enter your phone number: ";
string address = "Enter your address: ";



string printPerson(Person person){
	string name = person.name;
	string phoneNumber = person.phoneNumber;
	string address = person.address;

	string info = "\n" + name + "\n" + address + "\n" + phoneNumber + "\n";

	return info;
}





int main()
{
	Person person;
	cout << name;
	getline(cin, person.name);
	cout << "\n";

	cout << address;
	getline(cin, person.address);
	cout << "\n";

	cout << phoneNumber;
	cin >> person.phoneNumber;


	cout << printPerson(person);


	system("pause");
}



