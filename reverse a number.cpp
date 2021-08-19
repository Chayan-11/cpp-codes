// Program to reverse a number using while loop

#include<iostream>
using namespace std;

int main()
{
	int n;
	int remainder = 0;
	int reverse = 0;
	
	cout << "Enter any number:- " << endl;
	cin >> n;
	
	while(n!=0)
	{
		remainder = n % 10;
		reverse = reverse * 10 + remainder;
		n = n/10;
	}
	
	cout << "The reversed number is :- " << reverse << endl;
}
