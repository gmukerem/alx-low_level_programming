/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 * return: on sucess 1
 * on error, -1 is returned, and error is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
