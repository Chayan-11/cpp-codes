// Program to check whether a number is perfect or not

#include<iostream>
using namespace std;

bool checkPerfect(int n)
{
	int i=0;
	int sum=0;
	while(i++ < n)
	{
		if(n%i==0 && i<n)
		{
			sum+=i;
		}
	}
	return sum == n;
}

int main()
{
	int n;
	cout << "Enter any number:- " << endl;
	cin >> n;
	if(checkPerfect(n))
	{
		cout << "It is a perfect number" << endl;
	}
	else
	{
		cout << "It is not a perfect number" << endl;
	}
	return 0;
}

/*
A perfect number is a number that is equal to the sum of its positive divisors excluding the number itself. 
For example, 28 is a perfect number because the sum of its divisors is 1 + 2 + 4 + 7 + 14 = 28.
Similarly, 6 is also a perfect number because 1 + 2 + 3 = 6.
*/
