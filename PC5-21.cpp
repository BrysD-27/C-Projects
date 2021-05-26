// bryson davis
// occc spring 2020
// beginning programming
// Random number guessing game

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

	cout << "Welcome to the Random Number Guessing Game!!!" << endl;
	cout << endl;

	char difficulty = ' ';

	int rand_num{},
		user_num{},
		number_of_guesses = 0,
		menu{};

	unsigned seed = time(0);

	srand(seed);

	do {
		cout << "Please enter a difficulty option. 1(easy), 2(medium), or 3(hard): ";
		cin >> difficulty;
		menu = false;


		switch (difficulty) {
		case '1': rand_num = rand() % 1000;
			cout << "You chose the easy difficulty option!" << endl;
			cout << "Guess a number between 1 and 1000: " << endl;
			cin >> user_num;
			number_of_guesses++;

			while (user_num != rand_num) {
				cout << "Your number is " << (user_num < rand_num ? "lower." : "higher.");
				cout << " Try again: ";
				cin >> user_num;
				number_of_guesses++;
			}

			cout << endl;
			cout << "Correct!" << endl;
			cout << "Random number = " << rand_num << endl;
			cout << "Your guess = " << user_num << endl;
			cout << "Number of guesses = " << number_of_guesses << endl;
			cout << endl;

			break;

		case '2': rand_num = rand() % 100000;
			cout << "You chose the medium difficulty option!" << endl;
			cout << "Guess a number between 1 and 100000: " << endl;
			cin >> user_num;
			number_of_guesses++;

			while (user_num != rand_num) {
				cout << "Your number is " << (user_num < rand_num ? "lower." : "higher.");
				cout << " Try again: ";
				cin >> user_num;
				number_of_guesses++;
			}

			cout << endl;
			cout << "Correct!" << endl;
			cout << "Random number = " << rand_num << endl;
			cout << "Your guess = " << user_num << endl;
			cout << "Number of guesses = " << number_of_guesses << endl;
			cout << endl;

			break;

		case '3': rand_num = rand() % 100000000;
			cout << "You chose the hard difficulty option!" << endl;
			cout << "Guess a number between 1 and 100000000: " << endl;
			cin >> user_num;
			number_of_guesses++;

			while (user_num != rand_num) {
				cout << "Your number is " << (user_num < rand_num ? "lower." : "higher.");
				cout << " Try again: ";
				cin >> user_num;
				number_of_guesses++;
			}

			cout << endl;
			cout << "Correct!" << endl;
			cout << "Random number = " << rand_num << endl;
			cout << "Your guess = " << user_num << endl;
			cout << "Number of guesses = " << number_of_guesses << endl;
			cout << endl;

			break;

		default:
			cout << "You have entered an incorrect input! Please try again: " << endl;
		}
	} while (difficulty < 1 || difficulty > 3);
	
	cout << endl;

	return 0;
}