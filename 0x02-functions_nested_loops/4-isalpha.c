#include "main.h"
/**
 * _isalpha - checks the character
 * @c: character
 * Return: i if it is letter if not 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
