#include"main.h"
/**
 * print_to_98 - function print all natural numbers from
 * n to 98.
 *
 * @n: checks input of function.
*/
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	printf("\n");
}
