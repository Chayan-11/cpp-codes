// Program to find the largest of two user input numbers 

#include<iostream>
using namespace std;

int main()
{
	int m,n;
	cout << "Enter the first number:- " << endl;
	cin >> m;
	cout << "Enter the second number:- " << endl;
	cin >> n;
	
	if(m > n)
	cout << m << " is greater than " << n << endl;
	else
	cout << n << " is greater than " << m << endl;
	return 0;
}

/* Algorithm to use:- 

1) Read the user input numbers one by one.

2) Compare them using an if-else condition.

3) Print the final output.

*/
