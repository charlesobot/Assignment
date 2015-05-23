/*
* number6.cpp
* Name: [charl obot]
* Department: [Mathemtics]
* Matric No: [45632367GG]
* A Program that calculate the body mass index 
*
* Stub file to enable you complete assignment#1-question#6
*/
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	int weight;
	int height;
	int BMI;
	cout << "Enter your weight(kg): " <<endl;
	cin >> weight;
	
	cout << "Enter your height(m): " <<endl;
	cin >> height;
	
	BMI = weight / pow(height , 2);
	
	cout << setprecision(2) << fixed << "Your BMI is: " <<BMI <<endl;
	
	if (BMI <= 18.5)
	cout << "You are under-weight." <<endl;
	else
	if ((BMI > 18.5) && (BMI < 24.9))
	cout << "Your weight is in the normal range. =)" <<endl;
	else
	if ((BMI > 25) && (BMI < 29.9))
	cout << "You are over-weight." <<endl;
	else
	cout << "You are Obese." <<endl;

	return 0;	
}
