#include "SalaryEmp.h"
#include <iostream>

SalaryEmp::SalaryEmp() {
	salaryPay = 0;
}

void SalaryEmp::setSalaryPay(double rate) {
	salaryPay = rate;
	setPay(salaryPay);
}

double SalaryEmp::getSalaryPay() {
	return(salaryPay);
}

double SalaryEmp::payrate(){
	setPay(salaryPay / 52);
	return(getPay());
}

void SalaryEmp::healthCare() {
	setHealthCareCost(getPay() * .12);
}

void SalaryEmp::vacation() {
	setVactionDay(15);
}

void SalaryEmp::print() {
	std::cout << std::endl << std::endl;

	vacation();
	healthCare();

	std::cout << "Your employee is a professional employee that makes $"
		<< salaryPay << " or $" << payrate() << " a week.\n"
		<< "They also get " << getVactionDay() << " number of vaction days.\n"
		<< "Lastly they have $" << getHelathCareCost() << " dollars for health care.\n";
}