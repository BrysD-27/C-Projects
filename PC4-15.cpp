// bryson davis
// occc spring 2020
// beginning programming
// PC4-15 Shipping Charges

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	cout << "Fast Freight Shipping Company charge rate calculator!" << endl;
	cout << endl;

	double weight, distance, charges{}, total_cost;

	cout << "Please enter the weight of the package you want shipped in kilograms: ";
	cin >> weight;
	cout << endl
		<< endl;
	if (weight < 0 || weight > 20) {
		cout << "Sorry, Fast Freight requires the weight of the package to be atleast 0 or more in kg but can't be more than 20 kg due to company policy."
			<< endl << endl;
		cout << "Please rerun the program with corrected inputs."
			<< endl << endl;
	}
	cout << "Please enter the distance the package will travel in miles: ";
	cin >> distance;
	cout << endl
		<< endl;
	if (distance < 1 || distance > 3000) {
		cout << "Sorry, Fast Freight requires the distance of the shipment to be more than 1 mile but not greater than 3,000 miles in distance."
			<< endl << endl;
		cout << "Please rerun the program with corrected inputs."
			<< endl << endl;
	}
	cout << showpoint << setprecision(2) << fixed;

	if (weight >= 0 && weight <= 2) {
		charges = 1.10;
	}
	else if (weight > 2 && weight <= 6) {
		charges = 2.20;
	}
	else if (weight > 6 && weight <= 10) {
		charges = 3.70;
	}
	else if (weight > 10 && weight <= 20) {
		charges = 4.80;
	}
	if (distance >= 1 && distance <= 500) {
		cout << "The total cost of the shipment is $" << charges << " for a distance of " << distance << " miles and a weight of " << weight << " kilograms." << endl;
		cout << endl;
	}
	else if (distance >= 500 && distance <= 3000) {
		total_cost = (distance / 500) * charges;
		cout << "The total cost of the shipment is $" << total_cost << " for a distance of " << distance << " miles and a weight of " << weight << " kilograms." << endl;
		cout << endl;
	}

	return 0;
}