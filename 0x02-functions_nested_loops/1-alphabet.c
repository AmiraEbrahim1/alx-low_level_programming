#include "main.h"
/**
 * main - entry point
 *
 * Description: function prints the alpabet in lowecase.
 *
 * Return: 0 (Success)
*/
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n')
}
