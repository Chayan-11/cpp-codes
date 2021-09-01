// Program to convert a string to integer using atoi

#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
	string numArr[] = {"1", "99", "999", "-22", "0.1", "1.23", "-1.2", "1234.5678"};
	int n;
	for(string str : numArr)
	{
		n = atoi(str.c_str());
		cout << "Value of : " << str << " is :- " << n << endl;
	}
}

/* Program Description:

*) Syntax of atoi:- 

int atoi(const char *str);

This method takes one c string or char* and returns its integer equivalent
Here, we have one string array. Using one for loop, we are iterating through the elements of this array and printing out the integer value of each value.
Note that it only considers the integral part of the number.

*/
