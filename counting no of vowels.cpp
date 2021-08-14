// Program to find out the total vowels in a string

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


/* Algorithm used:- 

1) Ask the user to enter a string.
2) Read and store the string in a variable.
3) Iterate through the characters of the string one by one.
4) Initialize one variable as 0 to store the total count of vowels.
5) For each character of the string, check if it vowel or not.
6) If it is a vowel, increment the count variable by 1.
7) Finally, print out the count variable to the user.
*/
