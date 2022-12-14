#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: a number a sign to be printed
 * Return: 1 if greater than 0, 0 if it is zero, - if les than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

