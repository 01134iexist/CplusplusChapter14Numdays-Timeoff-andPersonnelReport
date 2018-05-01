#include "TimeOff.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
	//gathering user input
	cout << "Enter amount of time worked (in months) : " << endl;
	int months;
	cin >> months;
	//creating time off object
	TimeOff testing;
	testing.setMaxVacation(months);
	cout << "Vacations hours accumulated : " << testing.getMaxVacation() << endl;
	cout << "Sick days accumulated : " << months << endl; /*employees accumulate 8 hours of sick leave a month; 8 hours equals 1 work day, therefore employees are allowed one sick day a month*/

	system("pause");
	return 0;
}
