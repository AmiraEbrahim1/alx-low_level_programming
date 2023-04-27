#include"main.h"
/**
 * more_numbers - function prints 10 times from
 * 0 to 14.
*/
void more_numbers(void)
{
	int d, num;

	for (d = 0; d < 10; d++)
	{
		for (num = 0; num <= 14; num++)
		{
			_putchar(num + '0');
		}
		_putchar('\n');
	}
}
