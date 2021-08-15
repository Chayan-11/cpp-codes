// Program to check if all characters of a string are alphanumeric or not

#include<iostream>
using namespace std;

int main()
{
	char str[100];
	cout << "Enter any string:- " << endl;
	cin.get(str, 100);
	
	for(int i=0; str[i]!='\0'; i++)
	{
		if(!isalnum(str[i]))
		{
			cout << str[i] << " is not alphanumeric" << endl;
		}
	}
}

/* Program description:- 

In C++, all character handling functions are defined in the cctype header file. It includes one function called isalnum to check for alphanumeric characters.

isalnum function definition:-

int isalnum(int c);

Parameters and return values:-

It takes one character to check for alphanumeric. Internally, isalnum converts the character to integer and checks if it is alphanumeric or not.

It returns one integer zero to indicate false and any other integer to indicate true.

1) Create one character array of size 100 to store the user-input string.

2) Ask the user to enter a string. Read and store it in the character array str using cin.

3) Using one for loop, iterate through the characters of the string one by one. This loop will iterate till a ‘\0’ is found in the array.

4) Check if the current character is alphanumeric or not. If it is not alphanumeric, print out the result.*/
