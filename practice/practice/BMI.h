#ifndef BMI_H
#define BMI_H

#include <iostream>
#include <string>

using namespace std;

class BMI
{
public:
	BMI();
	BMI( string, int, double); //Overload Constructor
private:
	string newName;
	int newHeight;
	double newWeight;
};

#endif