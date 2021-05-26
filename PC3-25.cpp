// bryson davis 
// occc spring 2020
// beginning programming 
// Dice 

#include <iostream>
#include <string>
using namespace std;

int main() {

	cout << "Let's play a Word game!" << endl;
	cout << endl;

	string fullname, age, city, col, prof, anim, pname;

	cout << "Please enter your full name: ";
	getline(cin, fullname);
	cout << endl;

	cout << "Please enter your age: ";
	getline(cin, age);
	cout << endl;

	cout << "Please enter the city you live: ";
	getline(cin, city);
	cout << endl;

	cout << "Please enter the College you attend: ";
	getline(cin, col);
	cout << endl;

	cout << "Please enter your profession: ";
	getline(cin, prof);
	cout << endl;

	cout << "Please enter a type of animal: ";
	getline(cin, anim);
	cout << endl;

	cout << "Please enter a name given to a pet: ";
	getline(cin, pname);
	cout << endl;
	cout << "There once was a person named " << fullname << " who lived in " << city
		<< ". At the age of " << age << ", " << fullname << " went to college at " << col << ". "
		<< fullname << " graduated and went to work as a " << prof << ". Then, " << fullname
		<< " adopted a " << anim << " named " << pname << ". They both lived happily ever after!" << endl;

	return 0;
}
