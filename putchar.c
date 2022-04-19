#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character to br printed out 
 * Return: On sucess 1, 
 * -1 on error, errno stated appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));

}
