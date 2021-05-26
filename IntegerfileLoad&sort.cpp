#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void fileload(int[], int);
void sorting(int[], int);
void swaping(int&, int&);
void searching(int[], int, int);
void searchagain(int[], int, int);

int main()
{
	const int size = 100000;
	int farray[size];
	int Empid;

	fileload(farray, size);
	cout << "Search number: ";
	cin >> Empid;
	
	searching(farray, size, Empid);
	
	sorting(farray, size);

	searchagain(farray, size, Empid);

	return 0;
}

void fileload(int farray[], int size)
{
	fstream fin;
	string filename;

	cout << "File: ";
	getline(cin, filename);

	fin.open(filename);

	if (!fin) {
		cout << "Error!";
	}
	else {
		for (int count = 0; count < size; count++)
		{
			fin >> farray[count];
		}
	}
}
void searching(int farray[], int size, int item)
{
	int index = 0;
	int position = -1;
	bool found = false;

	while (index < size && !found)
	{
		if (farray[index] == item)
		{
			found = true; 
			position = index;
		}
		index++;
	}
	if (position == -1) {
		cout << "Item was not found." << endl;
		cout << "# of comparisons " << index << endl;
	}
	else
	{
		cout << (position + 1) << endl;
		cout << "# of comparisons " << index << endl;
	}
}
void sorting(int farray[], int size)
{
	int minIndex, minValue;

	for (int start = 0; start < (size - 1); start++)
	{
		minIndex = start;
		minValue = farray[start];
		for (int index = start + 1; index < size; index++)
		{
			if (farray[index] < minValue)
			{
				minValue = farray[index];
				minIndex = index;
			}
		}
		swaping(farray[minIndex], farray[start]);
	}
}

void swaping(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void searchagain(int farray[], int size, int item)
{
	int first = 0,
		last = size - 1,
		middle,
		position = -1,
		index = 0;
	bool found = false;

	while (!found && first <= last)
	{
		middle = (first + last) / 2;
		if (farray[middle] == item)
		{
			found = true;
			position = middle;
		}
		else if (farray[middle] > item)
			last = middle - 1;
		else
			first = middle + 1;
		index++;
	}
	if (position == -1) {
		cout << "Number not found." << endl;
		cout << "# of comparisons " << index << endl;
	}
	else
	{
		cout << "Item found at " << position << "." << endl;
		cout << "# of comparisons " << index << endl;
	}
}