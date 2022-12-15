#include "main.h"

/**
 * _isupper - checks for upper case letter
 * @c: input character
 * Return: 1 for upprer case 0 for lower case
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
