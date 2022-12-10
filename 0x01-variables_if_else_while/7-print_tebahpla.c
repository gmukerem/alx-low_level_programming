#include <stdio.h>
/**
 * main - entry
 * Return: 0
 */
int main(void)
{
	char le;

	for (le = 'z'; le = 'a'; le--)
		putchar(le);

	putchar('\n');

	return (0);
}

