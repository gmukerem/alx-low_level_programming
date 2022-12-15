#include "main.h"

/**
 * _isupper - checks for upper case letter
 * @c: input character
 * Return: 1 for upprer case 0 for lower case
 */
int _isupper(int c)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	return (0);
}
