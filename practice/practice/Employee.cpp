#include "Employee.h"

Employee::Employee(){
	pay = 0;

}

Employee::Employee(string empName, double empPay){
	name = empName;
	pay = empPay;
}

string Employee::getName() const{
	return this->name;
}



double Employee::getPay() const{
	return pay;
}

void Employee::setName(string empName){
	name = empName;
}


void Employee::setPay(double empPay){
	pay = empPay;
}

string Employee::toString(){
	stringstream stm;
	stm << name << " pay = " << pay;
	return stm.str();
}

Employee::~Employee(){}