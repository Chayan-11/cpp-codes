// Program to change the case of all characters in a string

#include<iostream>
using namespace std;
int main()
{
	char string[100];
	cout << "Enter any string:- " << endl;
	cin.get(string,100);
	
	for(int i=0; string[i]!='\0'; i++)
	{
		if(islower(string[i]))
		{
			string[i] = char(toupper(string[i]));
		}
		else
		{
			string[i] = char(tolower(string[i]));
		}
	}
	cout << "The new string is " << string << endl;
}



/* islower():-
This function is used to check if a character is lowercase or not.
It is defined as:- 

int islower ( int c );

It returns zero if the result is false, any other number otherwise.

toupper():-
This function is used to convert a lowercase letter to uppercase.
It is defined as:-

int toupper ( int c );

It takes the character to be converted as the parameter and cast it to an integer. 
The return value is the uppercase equivalent of c.
It returns int representation of the uppercase if it exists.
Else, it returns the integer representation of the same argument character.

tolower():-
This function is used to convert an uppercase letter to lowercase.
It is defined as:-

int tolower ( int c );

Similar to toupper, it converts c to its lowercase equivalent and returns the value as an integer.

Both toupper and tolower method return the integer representation of a character. We can implicitly cast it to a character.*/
