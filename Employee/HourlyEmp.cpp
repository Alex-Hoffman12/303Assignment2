#include "HourlyEmp.h"
#include <iostream>

HourlyEmp::HourlyEmp() {
	hourlyRate = 0;
	hoursWorked = 0;
}

void HourlyEmp::setHourlyRate(double rate) {
	hourlyRate = rate;
}

double HourlyEmp::getHourlyRate() {
	return(hourlyRate);
}

void HourlyEmp::setHoursWorked(double hours) {
	hoursWorked = hours;
}

double HourlyEmp::getHoursWorked() {
	return(hoursWorked);
}

double HourlyEmp::payrate() {
	setPay(hourlyRate * hoursWorked);
	return(getPay());
}

void HourlyEmp::healthCare() {
	payrate();
	setHealthCareCost(getPay() * .08);
}

void HourlyEmp::vacation() {
	setVactionDay(.1 * hoursWorked);
}

void HourlyEmp::print() {
	std::cout << std::endl << std::endl;

	vacation();
	healthCare();

	std::cout << "Your employee is a nonprofessional employee that made $" << payrate() << " this week. \n" 
		<< "They also get " << getVactionDay() << " number of vaction days. \n"
		<< "Lastly they have $" << getHelathCareCost() << " dollars for health care. \n";
}