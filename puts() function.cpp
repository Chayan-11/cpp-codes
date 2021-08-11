// Demonstrate puts() function with examples

#include<iostream>
#include <cstdio>
int main()
{
    char str[] = "Programming can be fun!";
    puts(str);
    puts(str);
    return 0;
}


/*In C++, input/output operations can be performed by using C standard libraries.
These are defined inside the cstdio.h header file in C++. Full form of cstdio is C Standard Input and Output library.

Syntax of puts():-

int puts ( const char * str );

In simple words, you can use this function to print a string to the user.
It takes one argument str, which is a C string pointer. It writes this str to stdout.

Note that it adds one newline character ‘\n’ after writing the string.
This function is defined in cstdio.h file and we need to import it at the beginning of the program.

Return value:-
On success, it returns one non-negative value and on error, it returns EOF.
*/
