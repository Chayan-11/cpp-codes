// Program to check if a number is power of 2 or not using its binary

#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter a positive number:- " << endl;
	cin >> n;
	if(n<=0)
	{
		cout << "Please enter a valid number.";
	}
	else
	{
		if((n & (n-1)) == 0)
		{
			cout << n << " is a power of 2 " << endl;
		}
		else
		{
			cout << n << " is not a power of 2 " << endl;
		}
	}
return 0;
}
