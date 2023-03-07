#include "Employee.h"

class SalaryEmp: Employee
{
private:
	double salaryPay = 1;
public:
	
	// Default constructer for the SalaryEmp class
	// Sets salaryPay = 0
	SalaryEmp();

	// setSalaryPay -> sets the salaryRate Variable
	// pre: takes the salary of the employee
	// post: sets salaryPay = pay
	void setSalaryPay(double pay);

	// getSalaryPay -> gets the SalaryPay Variable
	// pre: none
	// post: returns salaryPay
	double getSalaryPay();
	
	// payrate -> sets the payrate of an salary employee per week (overrides Employee::payrate)
	// pre: none
	// post: returns salaryPay / 52
	double payrate() override;

	// payrate -> sets the Employee::healthCareCost variable (overrides Employee::healthCare)
	// pre: none
	// post: sets Employee::healthCareCost = Employee::pay * 12%
	void healthCare() override;

	// payrate -> sets the Employee::vactionDay variable (overrides Employee::vaction)
	// pre: none
	// post: sets Employee::vactionDay = 15
	void vacation() override;

	// print -> prints varibles to the user
	// pre: none
	// post: prints Employee::pay, payrate, Employee::vactionDay, and Employee::healthCareCost
	void print();
};

