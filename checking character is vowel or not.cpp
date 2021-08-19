// Program to check if a character is vowel or not

#include<iostream>
using namespace std;

int main()
{
	char c;
	
	cout << "Enter any character:- " << endl;
	cin >> c;
	
	if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
	  cout  << "The entered character is a vowel" << endl;
	else
	  cout << "The entered character is not a vowel" << endl;
	  return 0;
}
