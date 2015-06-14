#include <iostream>
#include <string>
#include "BMI.h"


using namespace std;

void main()
{
	string name;
	double weight;
	int height;

	cout << "Enter your name" << endl;
	cin >> name;
	cout << "Enter your weight" << endl;
	cin >> weight;
	cout << "Enter your height" << endl;
	cin >> height;
	BMI Student1(name, height, weight);
	BMI Student2;
	Student2.setName("jafar");

	cout << "Name is " << Student2.getName() << endl;
	cout << "Height is = " << Student2.getHeight() << endl;
	cout << "weight:" << Student2.getWeight() << endl;

	system("PAUSE");

}