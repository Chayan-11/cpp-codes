// Program to convert any string to integer using sscanf

#include<iostream>
using namespace std;

int main()
{
	string numArr[] = {"1", "99", "999", "-22", "0.1", "1.23", "-1.2", "1234.5678"};
	int n;
	
	for(string str : numArr)
	{
		sscanf(str.c_str(), "%d", &n);
		cout << "Value of : " << str << " is :- " << n << endl;
	}
}


/* Program Description: 

sscanf takes three parameters:- the first one is a c type string, the second one is the format type and the third one is the variable to store the result.
It reads the content of the string, formats it using the format type and stores that value in the third parameter variable.
We can use sscanf to convert one string to an integer.
The second parameter will be %d for this conversion in this case.
Also, even here only Integral part is taken into count.

*/
