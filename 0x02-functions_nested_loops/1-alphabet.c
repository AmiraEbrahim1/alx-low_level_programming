#include"main.h"

/**
 * print_alphabet - utilizes on the _putchar function
 * to print alphabet from a to z.
*/
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
