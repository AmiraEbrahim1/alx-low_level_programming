#include"main.h"
/**
 * _isdigit - function checks for a digit .
 *
 * @c: checks function input.
 *
 * Return: return 1 if digit
 * return 0 otherwise
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else if ((c <= 65 && c >= 90) || (c <= 97 && c >= 122))
		return (0);
	else
		return (0);
}
