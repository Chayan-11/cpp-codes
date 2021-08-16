// Program to demonstrate log() function

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double a = 10.432;
	float b = 17.1;
	long double c = 23.451;
	int d = 30;
	
	cout << "log(a):- " << log(a) <<endl;
	cout << "log(b):- " << log(b) <<endl;
	cout << "log(c):- " << log(c) <<endl;
  cout << "log(d):- " << log(d) <<endl;
  cout << "log(1):- " << log(1) <<endl;
  return 0;	
}


/* Problem description:- 

1) log() function in C++ is used to find out the base-e logarithm or natural logarithm of a number. It has different overloaded versions to take different types of arguments.

2) log() is defined in cmath header file and this header file is required to be imported at the top for using this function.


3) Definition of log():- 

double log (double x);
float log (float x);
long double log (long double x);
double log (T x); 

The last one if for integral type arguments. This overload actually cast the argument to a double before doing the calculation.


4) Return value of log():- 

If the argument is positive, it will return the natural logerithm value of the argument. 
If the argument is negative, it will cause one domain error. 
If the argument is zero, it may cause a pole error.

5) So, the best practice is to check if the number is greater than zero or not before using the log() function.

*/
