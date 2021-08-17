// Program to read a string in C++ using getline and print the same

#include<iostream>
using namespace std;

int main()
{
	string str;
	cout << "Enter any string:- " << endl;
	getline(cin, str);
	cout << str << endl;
	return 0;
}
