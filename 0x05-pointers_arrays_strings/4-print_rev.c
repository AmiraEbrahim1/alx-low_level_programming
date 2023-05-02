#include"main.h"
/**
 * print_rev - function prints reversed string
 * followed by new line.
 * @s: string to print
*/
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
