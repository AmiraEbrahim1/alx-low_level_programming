#include "main.h"
/**
 * main - entry point
 *
 * Description: print _putchar.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char str[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(i);
	}
	_putchar('\n');

	return (0);
}
