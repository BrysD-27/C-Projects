// bryson davis
// occc spring 2020
// beginning programming
// PC5-12

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	// stating variables
	double C, C1, start, stop;
	start = 0;
	stop = 0;
	// requesting input for starting and stopping values
	cout << "Please enter the starting and stopping Celsius temperatures:  ";
	cin >> C >> C1;
	
	// differentiate which inputs will be the starting or stopping values & rounding them to desired int
	if (C < C1) {
		start = floor(C);
		stop = ceil(C1);
	}
	else if (C1 < C) {
		start = floor(C1);
		stop = ceil(C);
	}

	
	// beginning of table

	cout << "===================================" << endl;
	cout << " Celsius\t\tFahrenheit" << endl;
	cout << "===================================" << endl;

	// loop
	int count;
	count = start;
	while (count <= stop) {
		cout << left << setw(12) << count << setprecision(2) << fixed << right << setw(20) 
			<< ((9.0 / 5) * count) + 32 << endl;
		count++;
	}
	
	// end of table
	cout << "====================================";

	return 0;
}