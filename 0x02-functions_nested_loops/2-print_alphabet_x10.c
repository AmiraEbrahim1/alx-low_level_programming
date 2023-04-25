#include"main.h"

/**
 * print_alphabet_x10 - utilizes _putchar to print
 * 10times the alphabet
*/
void print_alphabet_x10(void)
{
	int d = 0;

	while (d < 10)
	{
		char ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		d++;
	}
}
