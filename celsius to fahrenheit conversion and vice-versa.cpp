// Program to convert Celsius to Fahrenheit and Fahrenheit to Celsius 

#include<iostream>
using namespace std;
int main()
{
	float fahrenheit, celsius;
	int choice;
	cout << "Enter 1 for converting fahrenheit to celsius \nEnter 2 for converting celsius to fahrenheit" << endl;
	cin >> choice;
	if(choice == 1)
	{
		cout << "Enter the fahrenheit value:- " << endl;
		cin >> fahrenheit;
		celsius = (fahrenheit - 32) / 1.8;
		cout << "It is " << celsius << "degree celsius" << endl;
	}
	else if (choice == 2)
    {
        cout << "Enter the Celcius value:- " << endl;
		 cin >> celsius;
        fahrenheit = (1.8 * celsius) + 32;
        cout << "It is " << fahrenheit << " degree Fahrenheit" << endl;
    }
    else
    {
        cout << "Please enter a valid input" << endl;
    }
    return 0;
}
