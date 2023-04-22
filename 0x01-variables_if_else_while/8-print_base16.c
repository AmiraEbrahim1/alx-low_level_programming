#include <stdio.h>
/**
 * main - entry point
 *
 * Description:print all numbers of base16.
 *
 * Return:Always 0 (Success)
*/
int main(void)
{
	int b = 48;

	while (b <= 102)
	{
		putchar(b);
		if (b == 57)
			b += 39;
		b++;
	}
	putchar('\n');
	return (0);
}
