#include <stdio.h>
/**
 * main - entry point
 *
 * Description:print 0,1,-9
 *
 * Return:Always 0 (Success)
*/
int main(void)
{
	int d = 0;

	while (d <= 9)
	{
	putchar(digit + 48);
	if (d != 9)
	{
		putchar(',');
		putchar(' ');
	}
	d++;
	}
	putchar('\n');
	return (0);
}

