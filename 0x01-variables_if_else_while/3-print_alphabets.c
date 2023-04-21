#include <stdio.h>
/**
 * main - entry point
 *
 * Description: print all lower case and uppercase alphabet.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char ch1 = 'a';
	char ch2 = 'A';

	while (ch1 <= 'z' && ch2 <= 'Z')
	{
		putchar(ch1);
		putchar(ch2);
		ch1++;
		ch2++;
	}
	putchar('\n');
}
