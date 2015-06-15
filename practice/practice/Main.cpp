#include <iostream>
#include <string>
#include "Employee.h"


using namespace std;

void main()
{
	Employee Emp1("abbas",100000);
	Employee Emp2("bill", 110000);
	cout << Emp1.toString() 
		 << endl << Emp2.toString() << endl;
	system("PAUSE");
}