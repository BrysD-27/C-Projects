// bryson davis
// occc spring 2020
// beginning programming
// PC4-14 Bank Charges

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {

	cout << "Find out this month's bank charges!" << endl;
	cout << endl;

	double account_balance, account_serv_fee, low_bal_fee, checks, total_fees, check_charge{};

	cout << "Please enter your current balance for this month: ";
	cin >> account_balance;
	cout << endl;
	
	if (account_balance < 0) {
		cout << "Urgent! Your account is overdrawn!"
			<< endl
			<< endl;
	}
	
	cout << "Please enter the amount of checks written this month: ";
	cin >> checks;
	cout << endl;

	if (checks < 0) {
		cout << "The amount of checks written must be a value of 0 or more, please rerun the program and try again."
			<< endl
			<< endl;
	}

	account_serv_fee = 10;
	
	cout << setprecision(2) << fixed;
	
	if (account_balance < 400) {
		low_bal_fee = 15;
	}
	else if (account_balance > 399) {
		low_bal_fee = 0;
	}

	if (checks > 0 && checks <= 20) {
		check_charge = (checks * .10);
	}
	else if (checks >= 20 && checks <= 39) {
		 check_charge = (checks * .08);
	}
	else if (checks >= 40 && checks <= 59) {
		check_charge = (checks * .06);
	}
	else if (checks >= 60) {
		check_charge = (checks * .04);
	}
	

	total_fees = check_charge + low_bal_fee + account_serv_fee;
	
	
	cout << left << setw(12) << "Fees" << right << setw(26) << "Charges" << endl;
	cout << endl;
	cout << left << setw(12) << "Account service fee" << right << setw(13) << "$" << account_serv_fee << endl;
	cout << left << setw(12) << "Checks fee" << right << setw(20) << "$" << check_charge << endl;
	cout << left << setw(12) << "Low balance fee" << right << setw(17) << "$" << low_bal_fee << endl;
	cout << left << setw(12) << "Total cost of fees" << right << setw(14) << "$" << total_fees << endl;


	return 0;
}