// Program to count the total number of digits in a string

#include<iostream>
#include<ctype.h>
using namespace std;

bool isnumber(char c)
{
	if(isdigit(c))
	
		return true;
	  return false;	
}
	int main()
	{
		string st;
		int counter=0;
		cout << "Enter any string:- " << endl;
		getline(cin, st);
		
		for(int i=0; i<st.size(); i++)
		{
			if(isnumber(st[i]))
			{
				counter++;
			}
		}
		cout << "Total digits in the string = " << counter << endl;
		return 0;
	}

/* Algorithm used:- 

1) isNumber() function is used to check if a character is number or not. It takes one character as the argument and returns one boolean value.
true if it is a number and false otherwise.

2) main() is the starting point of the program. This method is executed first.
Inside the main method, we are defining one string st and one integer counter variable. 
The st variable is for holding the user input string and counter is for holding the total count of numbers in the string.

3) Ask the user to enter a string. cout is used to print a message to the user.

4) Run one for loop to iterate over the string one by one character. It will run from i = 0 to i = length of the string - 1.
On each iteration, the value of i will increase by 1.
For example, for the string “hello”, it will run from i = 0 to i = 4.
We can access the characters of a string with its index. The index starts from 0 and ends on length - 1.

5) Inside the loop, on each iteration, check if the current character is a number or not.
We are using st[i] to access the current character.

6) For the first iteration, i is 0, so it will verify the first character, for the second iteration, i is 1 and it will verify the second character and so on.
If the current character is number or the return value of isnumber function is true, 
increment the value of the count variable by 1. 

7) Its initial value was 0. So, if we find the first number, it will be 1, for the second number it will be 2 and so on.

8) At the end of the program, counter will hold the total count of numbers in the string.

9) Print this value to the user. Notice how we are concatenating the message text with the integer count in a single cout line.
*/
