#include"main.h"
/**
 * more_numbers - function prints 10 times from
 * 0 to 14.
*/
void more_numbers(void)
{
	int d, num, count;

	for (d = 0; d < 10; d++)
	{
		for (count = 0; count <= 14; count++)
		{
			num = count;
			if (count > 9)
			{
				_putchar(1 + 48);
				num = count % 10;
			}
			_putchar(num + 48);
		}
		_putchar('\n');
	}
}
