// bryson davis
// occc spring 2020
// beginning programming
// PC8-11

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

void fileOpener(string[], int);
void selectionSort(string[], int);
void swapit(string, string);

int main()
{
	const int size = 20;
	std::string Array_names[size];
	
	fileOpener(Array_names, size);

	cout << "Here are the unsorted names: " << endl << endl;
	for (auto element : Array_names)
	{
		cout << element << endl;
	}
	cout << endl;

	selectionSort(Array_names, size);

	cout << "Here is the sorted names: " << endl << endl;
	for (auto element : Array_names)
	{
		cout << element << endl;
	}
	return 0;
}

void fileOpener(string Array_list[], int size)
{
	ifstream fin;
	string fileName;

	cout << "Please enter the file name: ";
	getline(cin, fileName);

	fin.open(fileName);

	if (!fin)
	{
		cout << "Error opening file. Please try again.";
	}
	else
	{
		for (int count = 0; count < 60; count++)
		{
			fin >> Array_list[count];
		}
	}
}

void selectionSort(string names[], int size)
{
	int minIndex;
	string minValue;

	for (int start = 0; start < (names->size() - 1); start++)
	{
		minIndex = start;
		minValue = names[start];
		for (int index = start + 1; index < names->size(); index++)
		{
			if (names[index] < minValue)
			{
				minValue = names[index];
				minIndex = index;
			}
		}
		swapit(names[minIndex], names[start]);
	}	
}

void swapit(string a, string b)
{
	std::string temp = a;
	a = b;
	b = temp;
}