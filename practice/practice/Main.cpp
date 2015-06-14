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
	system("PAUSE");

}