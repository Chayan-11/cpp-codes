//Program to find the largest string 

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	string s1, s2;
	cout << "Enter the first string:- \n" << endl;
	getline(cin, s1);
	cout << "Enter the second string:- \n" << endl;
	getline(cin, s2);
	if(strlen(s1.c_str()) == strlen(s2.c_str()))
	{
		cout << "Both the strings are equal" << endl;
	}
	else if(strlen(s1.c_str()) > strlen(s2.c_str()))
	{
		cout << "The first string is larger than second string" << endl;
	}
	else
	{
		cout << "The second string is greater than first string" << endl;
	}
	return 0;
}

/* Explanation:- 

To find out the larger string, you need to find out its length.
In C++, we can find out the length of a string using the strlen method.

strlen() in C++:- 

strlen() is used to find out the length of a string. 
It is defined in cstring header file. 
cstring is used for c-style null-terminated byte string.
It includes a lot of useful string methods and strlen() is one among them.

syntax:- 

size_t strlen( const char* str );

It takes one C style string as its argument and returns its size.
*/
