#include<unistd.h>
/**
 * _putchar - write the character c.
 * @c:function check input
 * Return:1 (Success)
 * -1 (error)
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
