// bryson davis 
// occc spring 2020 
// beginning programming
// PC3-14

#include <iostream> 
#include <string>
#include <iomanip>
using namespace std;

int main() {

	cout << "Dunder Mifflin Monthly Sales Tax Report" << endl;
	cout << endl;

	string month;
	string year;

	cout << "Please enter the inquired sales month: ";
	getline(cin, month);
	cout << endl;
	cout << "Please enter the year of the inquired sales month: ";
	getline(cin, year);
	cout << endl;

	double total, psales, cstax, sstax, tstax;

	cout << "Please enter the total amount of sales collected: ";
	cin >> total;
	cout << endl;

	psales = total / 1.06;
	sstax = psales * .04;
	cstax = psales * .02;
	tstax = sstax + cstax;

	const int COL = 15;

	cout << "Sales Tax report for the month of: " << month << setw(5) << year << endl;
	cout << "______________________________________________________" << endl;
	cout << endl;
	cout << setprecision(2) << fixed;
	cout << "Total Collected:" << setw(COL) << total << endl; 
	cout << "Sales:" << setw(25) << psales << endl;
	cout << "County Sales Tax:" << setw(12) << cstax << endl;
	cout << "State Sales Tax:" << setw(14) << sstax << endl;
	cout << "Total Sales Tax:" << setw(14) << tstax << endl;


	return 0;
}