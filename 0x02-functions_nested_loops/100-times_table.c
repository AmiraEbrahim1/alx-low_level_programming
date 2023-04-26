#include"main.h"
/**
 * print_times_table - function prints n times table.
 *
 * @n: checks function input.
*/
void print_times_table(int n)
{
	int m1, m2, prod;

	if (n <= 15 && n >= 0)
	{
		for (m1 = 0; m1 <= n; m1++)
		{
			_putchar(48);
			for (m2 = 1; m2 <= n; m2++)
			{
				_putchar(',');
				_putchar(' ');
				prod = m1 * m2;

				if (prod <= 9)
					_putchar(' ');
				if (prod <= 99)
					_putchar(' ');
				if (prod >= 100)
				{
					_putchar((prod / 100) + 48);
					_putchar((prod / 10) % 10 + 48);
				}
				else if (prod < 100 && prod >= 10)
					_putchar((prod / 10) + 48);
				_putchar((prod % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
