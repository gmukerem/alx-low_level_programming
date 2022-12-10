#include <stdio.h>
/**
 * main - entry
 * Return: 0
 */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchr(lc);
	}
	putchar('\n');
	return (0);
}
