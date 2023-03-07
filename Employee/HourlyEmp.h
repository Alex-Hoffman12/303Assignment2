#include "Employee.h"

class HourlyEmp: Employee
{
private:
	double hourlyRate;
	double hoursWorked;
public:
	
	// Default constructer for the HourlyEmp class
	// Sets hourlyRate and hoursWorked = 0
	HourlyEmp();

	// setHourlyRate -> sets the hourlyRate Variable
	// pre: takes the pay per hour
	// post: sets hourlyRate = rate
	void setHourlyRate(double rate);
	
	// getHourlyRate -> gets the hourlyRate Variable
	// pre: none
	// post: returns hourlyRate
	double getHourlyRate();
	
	// setHoursWorked -> sets the hoursWorked Variable
	// pre: takes the amount of hours worked
	// post: sets hoursWorked = hours
	void setHoursWorked(double hours);

	// getHoursWorked -> gets the hoursWorked Variable
	// pre: none
	// post: returns hoursWorked
	double getHoursWorked();

	// payrate -> sets the payrate of an hourly employee (overrides Employee::payrate)
	// pre: none
	// post: returns hoursWorked * hourlyRate
	double payrate() override;

	// payrate -> sets the Employee::healthCareCost variable (overrides Employee::healthCare)
	// pre: none
	// post: sets Employee::healthCareCost = Employee::pay * 8%
	void healthCare() override;

	// payrate -> sets the Employee::vactionDay variable (overrides Employee::vaction)
	// pre: none
	// post: sets Employee::vactionDay = hoursWorked * .1
	void vacation() override;

	// print -> prints varibles to the user
	// pre: none
	// post: prints payrate, Employee::vactionDay, and Employee::healthCareCost
	void print();
};

