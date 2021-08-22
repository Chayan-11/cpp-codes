// Program to print the ASCII values of all English alphabets

#include<iostream>
using namespace std;
int main()
{
	char c;
	cout << "Upper case :- " << endl;
	for(c = 'A'; c <= 'Z'; c++)
	{
		cout << c << " : " << (int)c << endl;
	}
	
	cout << "Lower case :- " << endl;
	for(c = 'a'; c <= 'z'; c++)
	{
		cout << c << " : " << (int)c << endl; 
	}
	return 0;
}
