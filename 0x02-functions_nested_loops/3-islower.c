#include "main.h"

/**
 *_islower - checks for lower case character
 *@c: the character
 *Return: 1 if it is lower case if not 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
