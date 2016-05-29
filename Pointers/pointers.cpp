#include <iostream>
#include <string>

using namespace std;

string person1 = "";
string person2 = "";


void giveNames(string *person1, string *person2)
{
	cout << "Please enter a name: ";
	cin >> *person1;

	cout << "Please enter another name: ";
	cin >> *person2;

}

void useReferences(string &person1Ref, string &person2Ref)
{
	person1Ref = "goofball";
	person2Ref = "dingbat";

}

void unchanged(string person1, string person2)
{
	person1 = "IM MUTATED";
	person2 = "IM MUTATED";
}



int main()
{
	giveNames(&person1, &person2);

	cout << "\n" << person1;
	cout << "\n" << person2 << "\n" << "\n";

	string &person1Ref = person1;
	string &person2Ref = person2;

	useReferences(person1Ref, person2Ref);

	cout << "\n" << person1;
	cout << "\n" << person2 << "\n" << "\n";

	unchanged(person1, person2);

	cout << "\n" << person1;
	cout << "\n" << person2 << "\n" << "\n";

	system("pause");
}




