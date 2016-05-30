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

	int rows = 0;
	int cols = 0;

	cout << "Please enter a number: ";
	cin >> rows;
	cout << "Please enter a number: ";
	cin >> cols;

	int **p_p_multiplicationTable = new int*[rows];
	
	for (int i = 0; i < rows; i++)
	{
		p_p_multiplicationTable[i] = new int[cols];
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			p_p_multiplicationTable[i][j] = (i+1) * (j+1);
			cout << " " << p_p_multiplicationTable[i][j] << " ";
		}
		cout << "\n";
	}

	for (int i = 0; i < rows; i++)
	{
		delete[] p_p_multiplicationTable[i];
	}

	delete[] p_p_multiplicationTable;

	

	system("pause");
}




