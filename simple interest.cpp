//Program to find simple interest

#include<iostream>
using namespace std;
int main()
{
	float p,r,t;
	float si;
	
	cout << "Enter the principal amount:- " << endl;
	cin >> p;
	cout << "Enter the rate of interest:- " << endl;
	cin >> r;
	cout << "Enter the time in years:- " << endl;
	cin >> t;
	
	si = (p*r*t)/100;
	cout << "The simple interest is:- " << si << endl;
	return 0;
}
