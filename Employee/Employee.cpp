#include "Employee.h"

Employee::Employee() {
	healthCareCost = 0;
	pay = 0;
	vacationDay = 0;
}

void Employee::setHealthCareCost(double money) {
	healthCareCost = money;
}

double Employee::getHelathCareCost() {
	return(healthCareCost);
}

void Employee::setPay(double money) {
	pay = money;
}

double Employee::getPay() {
	return(pay);
}

void Employee::setVactionDay(double days) {
	vacationDay = days;
}

double Employee::getVactionDay() {
	return(vacationDay);
}
