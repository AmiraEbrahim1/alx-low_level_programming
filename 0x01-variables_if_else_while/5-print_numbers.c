#include <stdio.h>
/**
 * main - entry point
 *
 * Description: print all single digit numbers.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int d = 0;

	while (d < 10)
	{
		printf("%d", d);
		d++;
	}
	printf("\n");
	return (0);
}
