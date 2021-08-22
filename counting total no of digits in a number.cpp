// Program to count total number of digits in a number

#include<iostream>
using namespace std;

int main()
{
	int n, counter = 0;
	cout << "Enter any number:- " << endl;
	cin >> n;
	while(n != 0)
	{
		counter++;
		n = n/10;
	}
	cout << "Total digits in the number = " << counter << endl;
	return 0;
}
