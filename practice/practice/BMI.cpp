#include "BMI.h"

BMI::BMI()
{
	newHeight = 0;
	newWeight = 0;
}

BMI::BMI(string name, int height, double weight)
{
	newName = name;
	newHeight = height;
	newWeight = weight;
}

string BMI::getName() const
{
	return newName;
}

double BMI::getWeight() const
{
	return newWeight;
}

int BMI::getHeight() const
{
	return newHeight;
}

void BMI::setName(string name)
{
	newName = name;
}

BMI::~BMI(){}