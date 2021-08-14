// Program to find LCM of two numbers

#include<iostream>
using namespace std;

int main()
{
	int n1, n2, lcm;
	int counter = 1;
	
	cout << "Enter the first number:- " << endl;
	cin >> n1;
	cout << "Enter the second number:- " << endl;
	cin >> n2;
	
	if(n1 < n2)
	{
		lcm = n2;
		
		while(counter < n1)
		{
			if(lcm % n1 == 0 && lcm % n2 == 0)
			{
				break;
			}
			lcm += n2;
			counter++;
		}
	}
	else
	{
		lcm = n1;
		while(counter < n2)
		{
			if(lcm % n1 == 0 && lcm % n2 == 0)
			{
				break;
			}
			lcm += n1;
			counter++;
		}
	}
	cout << "LCM of the number entered is = " << lcm << endl;
	return 0;
}

/*  Algorithm used:-

To find out the LCM, we will use one loop that will run till the LCM is found. Suppose, we want to find out the LCM for 5 and 3. 
Following are the multipliers for each:- 

5 :- 5, 10, 15, 20, 25..........
3 :- 3, 6, 9, 12, 15, 18, 21....

So, if we are checking for an LCM, we can only check for the multiplier of the bigger number i.e. 5. 
If you check the multiplier or the smaller number or all numbers starting from 3, it will work.
But the process will be faster if we check only the multiplier of the bigger number starting from 5 in this example.

The user will enter both numbers and our program will first verify which one is the bigger number. It will then keep checking for the LCM by using a loop.
*/
