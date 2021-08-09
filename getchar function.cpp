/* C++ getchar() function explanation with example:- 

*) C++ provides one function called getchar() to read user inputs.This function reads the next character from stdin!

*) The syntax of the getchar() function is as below :-

     int getchar ( void );
     
*) Parameters and return types:-

This function doesn’t take any parameter.

On success, it returns one integer value.

On failure, it returns EOF. Note that if it reads end-of-file, EOF is returned and sets the stdin eof indicator. 
For error or failure, EOF is returned and sets the stdin error indicator. EOF is returned in both cases.

*) Header to include:-

This is actually a C library used for input/output operations. It is defined in the _cstdio _(C standard input-output library) header of C++.



Here is an example:-
*/

#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
	int ch;
	cout << "Enter a string:- " << endl;
	do
	{
		ch = getchar();
		cout << "Reading--" << ch << "or" << char(ch) << endl;
	}
    while(ch!='\n');
    return 0;
}
