// Program to find the area of a circle using cmath header file

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	float a, r;
	cout << "Enter the radius of the circle:- " << endl;
	cin >> r;
	a = M_PI * pow(r, 2);
	cout << "Area of the circle is:- " << a << endl;
	return 0;
}
