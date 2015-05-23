/*
* number4.cpp
* Name: [charl obot]
* Department: [Mathematics]
* Matric No: [45632367GG]
* A  program that inputs a five-­-digit	integer,separates the integer into its digits and	
* prints them separated	by three spaces	each.	
* Stub file to enable you complete assignment#1-question#4
*/
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	int fivedigit;
	int first, second, third, fourth, fifth;
	
	cout << "enter the five digit integer: ";
	cin >> fivedigit;
	
	if(fivedigit < 10000)
	{
		cout << " Restructured to ";
	}
	
	if(fivedigit > 9999)
	{
		cout << "Restructured to ";
	}
	
	first = fivedigit/10000;
	second = (fivedigit/1000)%10;
	third = (fivedigit/100)%10;
	fourth = (fivedigit/10)%10;
	fifth = fivedigit%10;
	
	cout << first;
	cout << " " << second;
	cout << " " << third;
	cout << " " << fourth;
	cout << " " << fifth;
	
	return 0;
}
