// Program to check if a number is Armstrong or not

/* Armstrong number:-
A number is called an Armstrong number if the sum of its digits each raised to the power of the number of digits 
is equal to the number itself. e.g:- 371, 153, etc. */

#include<iostream>
using namespace std;
int armstrong(int a)
{
	return a*a*a;
	
}
int main()
{
	int temp, n, sum=0;
	cout <<"Enter any number:-" << endl;
	cin >> n;
	temp = n;
	while(temp!=0)
	{
		sum += armstrong(temp % 10);
		temp = temp/10; 
	}
	if(sum == n)
	{
		cout << "It is an Armstrong number" << endl;
    }
		else
		{
		cout << "It is not an Armstrong number" << endl;
	    }
	return 0;
}
