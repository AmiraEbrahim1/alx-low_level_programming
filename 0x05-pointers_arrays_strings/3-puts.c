#include"main.h"
/**
 * _puts - function prints a string .
 *
 * @str: function check input.
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++ + 48);
	}
		_putchar('\n');
}