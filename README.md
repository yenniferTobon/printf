## PRINTF

Printf takes a string and prints it.

####DESCRIPTION
Format specification are allow in the following cases (c, s, d, i).

       c    chararacter to be printed until its last one.Does not print null.

       s    string to be printed until the last one which is not null.
            receives an %s and a variable that holds the value of s, so it can be converted to what the variable holds.

       %    To print a porcentage

       d    decimal. refer to a number and use it to print it as a decimal number of base 10.

       i    refers to a number

       NOTE: this is a version belonging to a personalized _printf which does not contains the flag characters, precision, field widht and
       lenght modifiers.

####EXAMPLES
	#include "holberton.h" 
	printf("I love pointer");
	Output ---> I love pointer
	Return: 14

	#include "holberton.h"
	_printf("%k%");
	Output ---> %k%
	Return: 3

	#include "holberton.h"
	 _printf("El precio es: %d", 750.00);
 	Output ---> El precio es 750.000
	Return: 20

Task | Description 
------------ | -------------
0 | Produces output according to a format.
1 | Handle conversion specifiers.
2 | Man page for printf.

### Authors
 - Barbara Calle
 - Yennifer Tobon
