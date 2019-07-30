#include <limits.h>
#include <stdio.h>
#include "../holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	/*int cont = 0;
	int n = 0;
	int p = 0;
	printf("\n");
	n = printf("n: %%");
	printf("\n");
	p = _printf("p: %%\0");
	printf("\n");
	printf("%d conteo de bytes de normal\n", p);
	printf("%d conteo de bytes de perzonalizado\n", n);
	return (cont);*/
	printf("hola %d %i", -45656, INT_MAX);
	_printf("hola %d %i", -45656, INT_MAX);
	/**printf("\n%d", n);
	printf("%d", p);**/
	return (0);
}

