#include <iostream>
#include <string>
#include <cfloat>

using namespace std;

int highestNum(int array[], int size);
int lowestNum(int array[], int size);
int averageNum(int array[], int size);

void main()
{
	int array[10];
	int num;


	for (int i = 0; i < 10; i++)
	{
		cout << "Please enter a number: ";
		cin >> num;
		cout << "\n";
		array[i] = num;
	}

	cout << "The largest number is: " << highestNum(array, 10) << "\n";
	cout << "The smallest number is: " << lowestNum(array, 10) << "\n";
	cout << "The average number is: " << averageNum(array, 10) << "\n";




	system("pause");
}

int highestNum(int array[], int size)
{
	int largest = array[0];

	for (int i = 0; i < size; i++)
	{
		if (array[i] > largest)
			largest = array[i];
	}

	return largest;

}

int lowestNum(int array[], int size)
{
	int lowest = array[0];

	for (int i = 0; i < size; i++)
	{
		if (array[i] < lowest)
			lowest = array[i];
	}

	return lowest;

}

int averageNum(int array[], int size)
{
	float average = 0;

	for (int i = 0; i < size; i++)
	{
		average += (float) array[i];
	}
	float result = average / (float) size;
	
	return result;

}