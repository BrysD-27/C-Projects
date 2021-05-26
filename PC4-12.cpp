// bryson davis
// occc spring 2020
// beginning programming
// software sales

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	const double package_price = 99.0;

	int units, cost_wo_discount;

	cout << "SOFTWARE SALES COST AND DISCOUNTS" << endl;
	cout << endl;

	cout << "Please type in the number of units that were sold: ";
	cin >> units;
	cout << endl;

	cout << "SOFTWARE SALES TABLE" << endl;
	cout << endl;

	cost_wo_discount = units * package_price;

	cout << setprecision(2) << fixed;

	if (units >= 0 && units <= 9) {
		cout << left << setw(12) << "Units sold" << right << setw(27) << units << endl;
		cout << left << setw(12) << "Total cost of units sold" << right << setw(15) << "$"
			<< cost_wo_discount << endl;
	}
	else if (units >= 10 && units <= 19) {
		cout << left << setw(12) << "Units sold" << right << setw(28) << units << endl;
		cout << left << setw(12) << "Total cost of units sold" << right << setw(15) << "$"
			<< (cost_wo_discount - cost_wo_discount * .20)
			<< endl;
	}
	else if (units >= 20 && units <= 49) {
		cout << left << setw(12) << "Units sold" << right << setw(28) << units << endl;
		cout << left << setw(12) << "Total cost of units sold" << right << setw(15) << "$"
			<< (cost_wo_discount - cost_wo_discount * .30)
			<< endl;
	}
	else if (units >= 50 && units <= 99) {
		cout << left << setw(12) << "Units sold" << right << setw(28) << units << endl;
		cout << left << setw(12) << "Total cost of units sold" << right << setw(15) << "$"
			<< (cost_wo_discount - cost_wo_discount * .40);
	}
	else if (units >= 100) {
		cout << left << setw(12) << "Units sold" << right << setw(29) << units << endl;
		cout << left << setw(12) << "Total cost of units sold" << right << setw(15) << "$"
			<< (cost_wo_discount - cost_wo_discount * .50)
			<< endl;
	}
	else {
		cout << "The number must be greater than 0."
			<< " Please rerun the program with higher number."
			<< endl;
	}

	cout << endl;

	return 0;
}