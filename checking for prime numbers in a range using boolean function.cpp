// Program to find all the prime numbers in a range using boolean function

#include<iostream>
using namespace std;

bool isPrime(int n)
{
	if(n<2)
	{
		return false;
	}
	for(int i = 2; i < n/2; i++)
	{
		if(n%i == 0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int start, end;
	cout << "Enter the starting number of the range:- " << endl;
	cin >> start;
	cout << "Enter the ending number of the range:- " << endl;
	cin >> end;
	for(int i=start; i<end; i++)
	{
		if(isPrime(i))
		{
			cout << i << " ";
		}
	}
	cout << endl;
}

/*

Program description:- 

A prime number is a natural number with only two factors:- 1 and the number itself.
Or we can’t have two numbers smaller than that numbers with a multiplication equal to that number itself.

#) Algorithm to use ::

1) Get the start and the end number from the user.

2) Check for each number if it is a prime or not.

3) If a number is prime, print it.

Use the below steps to check if a number is prime or not. We are using one separate function to do the prime check. This function returns one boolean value:- 

a) The first prime number is 2. If the number is less than 2, return false. 

b) Run one loop starting from 2 to (number/2). If any number in this range can divide the number, return false i.e. this number is not a prime.

c) If no number is found that can divide the number, this number is a prime number and return true for that.

*/
