#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>

using namespace std;

int randRange(int low, int high);

int main(){
	
	srand(time(NULL));
	string flip = "Enter F to Flip or Q to Quit: ";
	string userInput;

	while (true){
		cout << flip;
		cin >> userInput;

		if (userInput == "F"){

			if (randRange(0, 1) == 0){
				cout << "Heads" << "\n";
			}
			else {
				cout << "Tails" << "\n";
			}
		}
		else{
			break;
		}
	}

	system("pause");
}


// Page 117 in Jumping Into C++
int randRange(int low, int high){
	return rand() % (high - low + 1) + low;
}