#include<iostream>
using namespace std;
int main()
{
	char str[100];
	int counter = 0;
	cout << "Enter any string:- " << endl;
	cin.get(str,100);
	for(int i=0; str[i]!='\0'; i++)
	{
		switch (str[i])
		{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
			counter++;
			
		}
	}
	cout << "The total number of vowels present are:- " << counter << endl;
}
