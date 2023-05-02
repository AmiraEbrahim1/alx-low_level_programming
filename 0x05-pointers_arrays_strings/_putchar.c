#include<sdio.h>

/**
 * _putchar - write the character
 * @c: the character to write
 *
 * Return: success 1
 * error -1
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
