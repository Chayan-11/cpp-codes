// Program to convert any string to integer using stoi function

#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
	string numArr[] = {"1", "99", "999", "-22", "0.1", "1.23", "-1.2", "1234.5678"};
	int n;
	for(string str : numArr)
	{
		n = stoi(str);
		cout << "Value of : " << str << " is :- " << n << endl;
	}
}


/* Program Description:

stoi is similar to atoi. 
stoi was added in C++ 11.
The main difference between atoi and stoi is that atoi works only with C style string but stoi works with both c style string and C++ string.
Similar to atoi, stoi also considers only the integral part of the number.

*/
