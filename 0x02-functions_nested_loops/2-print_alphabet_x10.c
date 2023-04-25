#include"main.h"

/**
 * print_alphabet_x10 - utilizes _putchar to print
 * 10times the alphabet
*/
void print_alphabet_x10(void)
{
	char ch = 'a';
	int d = 0;

	while (d < 10)
	{
		while (ch < 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		d++;
	}
}
