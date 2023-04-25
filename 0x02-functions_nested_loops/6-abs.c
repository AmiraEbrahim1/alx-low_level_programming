#include"main.h"
#include<stdio.h>
/**
 * _abs - function computes the absolute value of an integer.
 *
 * @n:checks the function input.
 *
 * Return: Always 0 (Success).
*/
int _abs(int n)
{
	if (n < 0)
	{
		n = (-1) * n;
	}
	return (n);
}
