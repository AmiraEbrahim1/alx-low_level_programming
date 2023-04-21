#include <stdio.h>
/***/
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
