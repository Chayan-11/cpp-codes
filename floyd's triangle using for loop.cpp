// Program to print Floyd's triangle using for loop

#include<iostream>
using namespace std;

int main()
{
	int height, value = 1;
	cout << "Enter the height of the triangle:- " << endl;
	cin >> height;
	cout << "\n" << "Floyd's triangle of height " << height << " : " << "\n" << endl;
	for(int i=0; i<height; i++)
	{
		for(int j=0; j<=i; j++)
		{
			cout << value <<" ";
			value++;
		}
		cout << endl;
	}
	return 0; 
}

/*  Output:- 

Enter the height of the triangle:-
5

Floyd's triangle of height 5 :

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

*/
