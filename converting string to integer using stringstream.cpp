// Program to convert any string to integer using stringstream function

#include<iostream>
#include<sstream>
using namespace std;

int main()
{
	string numArr[] = {"1", "99", "999", "-22", "0.1", "1.23", "-1.2", "1234.5678"};
	int n;
	stringstream stream;
	
	for(string str : numArr)
	{
		stream.clear();
		stream.str(str);
		stream >> n;
		cout << "Value of : " << str << " is :- " << n << endl;
	}
}


/* Program Description:

Using stringstream, we can read the contents of a string and output the content to an integer.
stringstream.str() method is used to read the string content.
It returns 0 if the value can’t be parsed.

*/
