#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

class Employee
{
private:
	double healthCareCost;
	double pay;
	double vacationDay;
public:
	// Default constructer for the employee class
	// Sets healthCareCost, pay, and vactionDay = 0
	Employee();
	
	// setHealthCateCost -> sets the healthCareCost Variable
	// pre: takes the amount of money for health care cost
	// post: sets healthCareCost = money
	void			setHealthCareCost(double money);
	
	// getHealthCateCost -> gets the healthCareCost Variable
	// pre: none
	// post: returns healthCareCost 
	double			getHelathCareCost();

	// setPay -> sets the pay Variable
	// pre: takes the amount being paid
	// post: sets pay = money
	void			setPay(double money);
	
	// getPay -> gets the pay Variable
	// pre: none
	// post: returns pay
	double			getPay();

	// setVactionDay -> sets the vactionDay Variable
	// pre: takes the amount of days for vaction
	// post: sets healthCareCost = days
	void			setVactionDay(double days);
	
	// getVactionDay -> gets the vactionDay Variable
	// pre: none
	// post: returns vactionDay
	double			getVactionDay();

	// payrate -> an abstract function that is set for HourlyEmp and SalaryEmp to make their payrate functions
	virtual double	payrate() = 0;

	// healthCare -> an abstract function that is set for HourlyEmp and SalaryEmp to set their health care cost.
	virtual void	healthCare() = 0;
	
	// vacation -> an abstract function that is set for HourlyEmp and SalaryEmp to set there vaction days
	virtual void	vacation() = 0;

	// print -> an abstract function that is set for HourlyEmp and SalaryEmp to print out a list of varibles to the user
	virtual void	print() = 0;
};

#endif // !EMPLOYEE_H_