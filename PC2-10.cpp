// Bryson Davis 
// OCCC Spring 2020 
// Beginning programming 
// Chapter 2 Miles per gallon 

#include <iostream> 
using namespace std; 

int main() {

	cout << "Find out how many miles you get per gallon. First track how mny miles you driven on a full tank till half and then record how many gallons it takes to refill your tank back to full!" << endl;
	cout << endl;

	double miles, gallons, mpg;       

	cout << "Please enter how many miles driven: ";
	cin >> miles;

	cout << "Please enter the amount of gallons it took to refill your tank: ";
	cin >> gallons;

	mpg = miles / gallons;

	cout << "You drove " << miles
		<< " miles with "
		<< gallons << " gallons used! Your mpg is "
		<< mpg << "!" << endl;

	return 0;
}

