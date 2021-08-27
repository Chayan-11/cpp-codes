// Program to print Inverted Right Triangle pattern 

#include<iostream>
using namespace std;

void InvertedTriangle(int size, char c)
{
	for(int i=1; i<=size; i++)
	{
		for(int j=size; j>=i; j--)
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
	
	cout << "Enter the size:- " << endl;
	cin >> size;
	
	cout << "Enter the character:- " << endl;
	cin >> c;
	
	InvertedTriangle(size, c);
	
	return 0;
}

/*

Output :- 

Enter the size:-
5
Enter the character:-
*
* * * * *
* * * *
* * *
* *
*


*/
