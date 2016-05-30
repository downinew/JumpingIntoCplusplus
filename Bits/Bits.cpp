#include <iostream>
#include <string>
#include <bitset>

using namespace std;

int a;
int b;

int main() {

	a = 1;
	b = 1;

	cout << bitset<8>(a) << "\n";
	cout << (a << b) << "\n";
	cout << bitset<8>(a) << "\n";
	cout << (a >> b) << "\n";
	cout << bitset<8>(a) << "\n";

	b = 4;

	cout << (a << b) << "\n";
	cout << (a >> b) << "\n";

	system("pause");

}