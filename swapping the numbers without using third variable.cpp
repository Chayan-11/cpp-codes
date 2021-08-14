// Program to swap two numbers without using a third variable

#include<iostream>
using namespace std;

int main()
{
	int a,b;
	cout << "Enter the first number:- " << endl;
	cin >> a;
	cout << "Enter the second number:- " << endl;
	cin >> b;
	
	cout << "Before Swapping the numbers, value of a = " << a << ", value of b = " << b << endl;
  
	a = a + b;
	b = a - b;
	a = a - b;
	
	cout << "After Swapping the numbers, value of a = " << a << ", value of b = " << b << endl;
	return 0;
}


/* Algorithm used:- 

Using multiplication/division:- 

Before : x = 10, y = 20
Step 1 : x = x * y 
(x = 200, y = 20)

Step 2 : y = x/y 
(x = 200, y = 10)

Step 3 : x = x/y
(x = 20, y = 10)

In this example, we have seen how to swap the numbers without using a third number using only multiplication and division.


We can also do it using addition and subtraction like below:- 

Using addition/subtraction:- 
Before : x = 10, y = 20
Step 1 : x = x + y 
(x = 30, y = 20)

Step 2 : y = x - y 
(x = 30, y = 10)

Step 3 : x = x - y
(x = 20, y = 10)
*/
