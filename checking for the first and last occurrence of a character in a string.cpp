// Program to find the first and the last occurrence of a character in a string

#include<iostream>
using namespace std;

int main()
{
	string str; 
	char c;
	cout << "Enter the string:- " << endl; 
	getline(cin, str);
	cout << "Enter the character:- " << endl;
	cin >> c;
	
	int startIndex = -1;
	int endIndex = -1; 
	 
	for(int i=0; i<str.length(); i++)
	{
		if(str[i] == c)
		{
			if(startIndex == -1)
			{
				startIndex = i;
			}
			endIndex = i;
		}
	}
	
	if(startIndex == -1)
	{
		cout << "The character is not found in the string" << endl;
	}
	else
	{
		cout << "First Occurrence :- " << startIndex + 1 << endl;
		cout << "Last Occurrence:- " << endIndex + 1 << endl;
	}
	return 0; 
}


/* 
Explanation:- 

1) Create two variables str and c where str is to store the string and c is to store the character.

2) Ask the user to enter the string and the character. Read both and store them in str and c.

3) Create two integer variables startIndex and endIndex to store the start and the end indices of the user input character. Initialize them with value -1.

4) Run one for loop to iterate through the characters one by one.

5) Inside the loop, check if the current character is equal to the user-provided character or not.

6) If both are equal, update both startIndex and endIndex. Update startIndex only if its value is not -1 (i.e.) the character is not found before.

7) Finally, check the value of startIndex. If it is -1, i.e. the indices are not updated or the character is not found in the string.

8) Else, print out the values of startIndex and endIndex.

9) Index in a string starts from 0 so Add 1 to print the actual position.

*/
