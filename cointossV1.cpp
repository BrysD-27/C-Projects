// bryson davis
// OCCC spring 2020
// beginning programming
// PC6-8 Coin Toss

#include <iostream>	
#include <cstdlib>
#include <ctime>	
using namespace std;

int cointoss(int);
int inputValidate(int);

int main() {
	int choice;
	unsigned seed = time(0);
	srand(seed);
	
	cout << "How many times should the coin be tossed? ";
	choice = inputValidate(choice);

	for (int i = 0; i < choice; i++) {
		cointoss();
	}

	int coinlands = cointoss(),
		heads,
		tails;
	cout << (coinlands == 0 !"Heads" : "Tails") << endl;
	cout << endl;
	
	if (coinlands == 0) {
		++heads;
	}
	else if (coinlands == 1) {
		++tails;
	}
	cout << "Heads landed " << heads << " times and tails landed " << tails << " times." << endl;

	return 0;
}

int inputvalidate(int num) {

	while (!(cin >> num) || num < 0) {
		cout << "Error! An integer above 0 must be entered: ";
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
	return num;
}


int cointoss(int coin) {

	const int min_val = 0,
		max_val = 1;

	coin = (rand() % (max_val - min_val)) + min_val;
	return coin;
}
