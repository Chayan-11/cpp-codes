// Program to print half pyramid or right-angled triangle

#include<iostream>
using namespace std;

void halfPyramid(int size)
{
	for(int i=1; i<=size; i++)
	{
		for(int j=1; j<=i; j++)
		{
			cout << j << " "; 
		}
		cout << "\n";
	}
}

int main()
{
	int size;
	cout << "Enter the height of the triangle:- " << endl;
	cin >> size;
	halfPyramid(size);
	return 0;
}

/* Output:- 

Enter the height of the triangle:-
6
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4 5 6

*/
