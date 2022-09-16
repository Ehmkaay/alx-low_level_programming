#include "main.h"

/**
 * print_number - Prints an integer number
 * @n: integer to be printed
 */
void print_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		n1 = -n;
		_putchar('-');
	} else
	{
		print_number(n1 / 10);
	}

	putchar((n1 % 10) + '0');
}
