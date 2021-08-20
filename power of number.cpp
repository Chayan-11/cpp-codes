// Program to find the power of a number using pow() function

#include<iostream>
#include<cmath>
using namespace std;


int main()
{
	float b, e, result = 1;
	cout << "Enter the base:- " << endl;
	cin >> b;
	cout << "Enter the exponent:- " << endl;
	cin >> e;
	result = pow(b,e);
	cout << "Result = " << result << endl;
}


//Program to find the power of a number using loops (while loop in this case)

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	float b, e, result = 1;
	cout << "Enter the base:- " << endl;
	cin >> b;
	cout << "Enter the exponent:- " << endl;
	cin >> e;
	while(e!=0)
	{
		result = result*b;
		e--;
	}
	cout << "Result = " << result << endl;
}
