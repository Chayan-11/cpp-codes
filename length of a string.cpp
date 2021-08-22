// Program to find the length of a string using a loop

#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	string s = "Change the mode";
	int size = 0;
	
	for(int i = 0; s[i] != '\0'; i++)
	{
		size++;
	}
	cout << "Size :- " << size << endl;
	return 0;
}

// Program to find the string length using inbuilt methods

#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	string s = "Change the mode";
	
	cout << "Size using size() :- " << s.size() << endl;
	cout << "Size using length() :- " << s.length() << endl;
	return 0;
}


// Program to find the length of a string using cstr()_ method using strlen function

#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	string s = "Change the mode";
	
	cout << "Size :- " << strlen(s.c_str()) << endl;
	return 0;
}
