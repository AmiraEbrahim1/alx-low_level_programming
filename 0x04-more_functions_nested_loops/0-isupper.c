#include"main.h"
/**
 * _isupper - function checks uppercase or lowercase.
 *
 * @c: function check input
 *
 * Return: return 1 for uppercase
 * return 0 otherwise
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (0);
	else
		return (0);
}
