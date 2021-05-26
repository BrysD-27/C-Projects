// bryson davis
// occc spring 2020
// beginning programming
// PC7-1 

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

void getJudgeData(double[], int);
void calcscore(double[], int);
double findLowest(double[], int);
double findHighest(double[], int);

int main() {

	const int theSize = 100;
	double theArray[theSize];


	getJudgeData(theArray, theSize);

	cout << endl
		<< "1st score = " << theArray[0] << endl
		<< "2nd score = " << theArray[1] << endl
		<< "3rd score = " << theArray[2] << endl
		<< "4th score = " << theArray[3] << endl
		<< "5th score = " << theArray[4] << endl << endl;

	calcscore(theArray, theSize);

	return 0;
}

void getJudgeData(double score[], int thesize) {


	string filename;
	fstream fin;

	cout << "Filename? ";
	getline(cin, filename);

	fin.open(filename);

	if (!fin)
		cout << "Rip";
	else
	{
		fin >> score[thesize];
		while (fin >> score[thesize]) {
			if (score[thesize] > 10 || score[thesize] < 0) {
				delete[] score;
			}
		}
	}

}

void calcscore(double theArray[], int theSize) {
	double lowest = findLowest(theArray, theSize),
		highest = findHighest(theArray, theSize),
		average, sum = 0;
	int tnum;

	for (tnum = 0; tnum < theSize; tnum++) {
		sum += theArray[tnum];
	}
	average = sum / theSize;

	cout << endl << setprecision(2) << fixed << "Lowest score is " << lowest << endl
		<< "Highest score is " << highest << endl << endl;
	cout << "Contestants Average score is " << average << endl << endl;
}

double findLowest(double theArray[], int theSize) {

	int count;
	double lowest;
	lowest = theArray[0];
	for (count = 1; count < theSize; count++) {
		if (theArray[count] < lowest)
			lowest = theArray[count];
	}
	return lowest;
}

double findHighest(double theArray[], int theSize) {
	int count;
	double highest;
	highest = theArray[0];
	for (count = 1; count < theSize; count++) {
		if (theArray[count] > highest)
			highest = theArray[count];
	}
	return highest;
}