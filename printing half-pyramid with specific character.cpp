// Program to print half pyramid or right-angled triangle with a specified character

#include<iostream>
using namespace std;

void halfPyramid(int size, char c)
{
	for(int i=1; i<=size; i++)
	{
		for(int j=1; j<=i; j++)
		{
			cout << c << " "; 
		}
		cout << "\n";
	}
}

int main()
{
	int size;
	char c;
	cout << "Enter the height of the triangle:- " << endl;
	cin >> size;
	cout << "Enter the character:- " << endl;
	cin >> c;
	halfPyramid(size, c);
	return 0;
}

/* Output:- 

Enter the height of the triangle:-
6
Enter the character:-
#
#
# #
# # #
# # # #
# # # # #
# # # # # #

*/
