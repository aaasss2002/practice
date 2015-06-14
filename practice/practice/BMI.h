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
	string getName() const;
	int getHeight() const;
	double getWeight() const;
	void setName(string);

	~BMI();   // Destructor
private:
	string newName;
	int newHeight;
	double newWeight;
};

#endif