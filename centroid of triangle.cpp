// program to find the centroid of a triangle

#include<iostream>
using namespace std;
int main()
{
	float x1,y1,x2,y2,x3,y3;
	cout << "x1 = " << endl;
	cin >> x1;
	cout << "y1 = " << endl;
	cin >> y1;
	cout << "x2 = " << endl;
	cin >> x2;
	cout << "y2 = " << endl;
	cin >> y2;
	cout << "x3 = " << endl;
	cin >> x3;
	cout << "y3 = " << endl;
	cin >> y3;
	cout << "Centroid is =  (" << (x1 + x2 + x3) / 3 << "," << (y1 + y2 + y3) / 3 << ")" << endl;
	return 0;
}
