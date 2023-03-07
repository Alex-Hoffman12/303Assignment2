#include <iostream>
#include "Employee.h"
#include "SalaryEmp.h"
#include "HourlyEmp.h"

using namespace std;

int main() {

	char	userInputChar; //user input if char
	double	userInputDb; //user input if double
	bool pass = false; // condition for getting out of do loops
	
	cout << "Welcome to the employee assignment program." << endl << endl;


	
	do {																					//checks if you are entering 'S' for salary or 'H' for hourly
		cout << "Is Your employee a Professinal (S) or Nonprofessional (H)?  ";
		cin >> userInputChar;
		userInputChar = toupper(userInputChar);

		if (userInputChar == 'S' || userInputChar == 'H')
			pass = true;

		cout << endl << endl;
		cin.clear();
		cin.ignore(50, '\n');
	} while (pass == false);

	
	if (userInputChar == 'S') {																// if your employee was a salary employee, it makes a salary object
		SalaryEmp emp;
		
	
		cout << "What is the salary of this employee?  ";
		cin >> userInputDb;
		pass = true;
		if (userInputDb <= 0) {
			pass = false;		
			do {																			//Loops if userInput is a negative number
				cout << "Please enter a postive salary amount. ";                 
				cin >> userInputDb;
				if (userInputDb > 0)
					pass = true;
			} while (pass == false);
		}

		
		emp.setSalaryPay(userInputDb);
		cin.clear();
		cin.ignore(50, '\n');
		cout << endl << endl;

		emp.print();
	}

	
	if (userInputChar == 'H') {																// if your employee was a salary employee, it makes a hourly object
		HourlyEmp emp;
			
		cout << "What is their payrate? ";
		cin >> userInputDb;
		pass = true;
		if (userInputDb <= 0) {
			pass = false;
			do {																			//Loops if userInput is a negative number
				cout << "Please enter a postive payrate. ";
				cin >> userInputDb;
				if (userInputDb > 0)
					pass = true;
				cin.clear();
				cin.ignore(50, '\n');
			} while (pass == false);
		}
			
		emp.setHourlyRate(userInputDb);
		cout << endl << endl;
			
		cout << "How many hours did they work? ";
		cin >> userInputDb;
		if (userInputDb < 0) {
			pass = false;
			do {																			//Loops if userInput is a negative number (can be 0)
				cout << "Please enter the amount of hours worked. ";
				cin >> userInputDb;
				if (userInputDb > 0)
					pass = true;
				cin.clear();
				cin.ignore(50, '\n');
			} while (pass == false);
		}
			
		emp.setHoursWorked(userInputDb);

		emp.print();
	}
	
	cout << endl << endl << endl;
	cout << "Program is now closing." << endl;
	return (0);
}