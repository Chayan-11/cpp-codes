// Program to demonstrate if-else if-else ladder 

#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "Enter any number:- " << endl;
	cin >> n;
	if(n < 10)
	cout << "The entered number is smaller than 10" << endl;
	else if(n == 10)
	cout << "The number entered is 10" << endl;
	else if(n > 10 && n < 20)
	{
	cout << "The entered number is within the range of 10 and 20" << endl;
    }
    else if(n == 20)
    cout << "The number entered is 20" << endl;
    else if(n > 20 && n < 30)
    {
    	cout << "The number entered is within the range of 20 and 30" << endl;
	}
	else if(n == 30)
	cout << "The entered number is 30" << endl;
	else 
	{
		cout << "The number entererd is greater than 30" << endl;
	}
	return 0;
}
