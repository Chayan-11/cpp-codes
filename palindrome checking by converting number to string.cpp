// Program to check if a number is palindrome or not using header file and by converting number to string 

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	int n;
	cout << "Enter a number:- " << endl;
	cin >> n;
	string str = to_string(n);
	bool isPalindrome = true;
	
	int j = strlen(str.c_str()) - 1; 
	for(int i=0; i<j; i++, j--)
	{
		if(str[i] != str[j])
		{
			isPalindrome = false;
			break;
		}
	}
	if(isPalindrome)
	{
		cout << n << " is a palindrome number" << endl;
	}
	else
	{
		cout << n << " is not a palindrome number" << endl;
	}
	return 0;
}

-------------------------------------------------------------------------------------------------------------------------------------------------------------------
	
	
// Program to check whether a number is palindrome or not using normal method of reversing a number and comparing with original number

#include<iostream>
using namespace std; 

int getReverseNumber(int n)
{
	int reverse = 0;
	int right_most_digit;
	
	while(n != 0)
	{
		right_most_digit = n%10;
		reverse = (reverse*10) + right_most_digit;
		n = n/10; 
	}
	return reverse;
} 
int main()
{
	int n; 
	cout << "Enter a number:- " << endl;
	cin >> n;
	if(n == getReverseNumber(n))
	{
		cout << n << " is a palindrome number" << endl;
	}
	else
	{
		cout << n << " is not a palindrome number" << endl;
	}
	return 0;
}
