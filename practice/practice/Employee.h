#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<iostream>
#include<string>
#include<sstream>

using namespace std;

class Employee
{
public:
	Employee();
	Employee( string , double);
	string getName() const;
	double getPay() const;
	void setName(string);
	void setPay(double);
	string toString();
	~Employee();
private:
	string name;
	double pay;
};

#endif