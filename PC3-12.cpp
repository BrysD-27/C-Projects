// bryson davis
// occc spring 2020
// Beginning programming
// PC2-12

#include <iostream>
#include <iomanip>

using namespace std; 

int main() {

	cout << "Convert Celsius temperatures to Fahrenheit.";
	cout << endl;

	double cel, fht;

	cout << endl;

	cout << "Please enter Celsius temperature: ";
		cin >> cel;
		cout << endl;

		fht = cel * 9 / 5  +32;
   
		cout << fixed << setprecision (2);

 	cout << "The temperature is ";
	cout << fht;
	cout << " in Fahrenheit.";
	cout << endl;

		return 0;
}