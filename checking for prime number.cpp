// Program to find if a number is prime or not

#include<iostream>
using namespace std;

int main()
{
	int i, n;
	bool isPrime = true;
	cout << "Enter any positive integer:- " << endl;
	cin >> n;
	
	if(n == 0 || n == 1)
	{
		isPrime = false;
	}
	else
	{
		for(i=2; i<=n/2; ++i)
		{
			if(n%i == 0)
			{
				isPrime = false;
				break;
			}
		}
	}
	if(isPrime)
	 cout << n << " is a Prime number";
	else
	 cout << n << " is not a Prime number";
	return 0; 	
}

/* Description to the program:- 

1) This program takes a positive integer from the user and stores it in the variable n.

2) The boolean variable isPrime is initialized to true at the beginning of the program.

3) Since 0 and 1 are not prime numbers so if the input number is either 0 or 1, then the value of isPrime is set to false.

4) Else, the initial value of isPrime is left unchanged and the for loop is executed, which checks whether the number entered by the user is perfectly divisible by i or not.

for (i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
        isPrime = false;
        break;
    }
}

5) The for loop runs from i == 2 to i <= n / 2 and increases the value of i by 1 with each iteration.

6) The loop terminates at i == n / 2 because we cannot find any factor for n beyond the number n / 2. So, any iterations beyond n / 2 is redundant.

7) If the number entered by the user is perfectly divisible by i, then isPrime is set to false and the number will not be a prime number.

8) But if the input number is not perfectly divisible by i throughout the entirety of the loop, then the input number is only divisible by 1 and that number itself.

So, the given number is a prime number.*/
