#include "main."
#include <unistd.h>

/**
 * main - write the character c to stdout
 * Return: on sucess 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

