#include"main.h"
/**
 * swap_int - function that swaps the values of two integers.
 *
 * @a: function check input.
 * @b: function check input.
*/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
