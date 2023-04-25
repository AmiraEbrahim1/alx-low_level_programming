#include"main.h"
/**
 * print_last_digit - function prints the last digit of a number.
 *
 * @n:checks input of function.
 *
 * Return: Always 0 (Success)
*/
int print_last_digit(n)
{
	if (n < 0)
		n = (-1) * (n % 10);
	else
		n = n % 10;
	return (n);
}
