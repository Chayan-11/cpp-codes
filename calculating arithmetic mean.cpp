// Program to calculate the arithmetic mean of user input numbers 

#include<iostream>
using namespace std;

int main()
{
	int tot, sum = 0, n;
	cout << "Enter the total count:- " << endl;
	cin >> tot;
	for(int i=0; i<tot; i++)
	{
		cout << "Enter the number " << i+1 << " :-" << endl;
		cin >> n;
		sum = sum + n;
	 } 
	 
	 cout << "Arithmetic Mean :- " << (sum/tot) << endl;
	 return 0;
}

/* 
Description:- 

*) Create three variables tot, sum and n to hold the total count, sum of all numbers and current user input number.
*) Ask the user to enter the total count of numbers. Read it and store it in the variable tot.
*) Run one for loop to read the numbers one by one.
*) Inside the loop, ask the user to enter a number, read it using cin and store it temporarily in n variable. Also, add n to sum.
*) Finally, print out the arithmetic mean. Arithmetic mean is equal to sum/total.

*/
