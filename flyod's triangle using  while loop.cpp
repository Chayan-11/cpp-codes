// Program to print Floyd's triangle using while loop

#include<iostream>
using namespace std;

int main()
{
	int height, value = 1;
	cout << "Enter the height of the triangle:- " << endl;
	cin >> height;
	cout << "\n" << "Floyd's triangle of height" << height << " : " << "\n" << endl;
    int i=0, j;
    while(i < height)
    {
    	j = 0;
    	while(j <= i)
    	{
	    	cout << value << " ";
		    value++;
		    j++;
	    }
	    cout << endl;
    	i++;
    }
    return 0;
}
