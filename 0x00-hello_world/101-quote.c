#include <unistd.h>
/**
 * main - entry point
 *
 * Description: print a quote using write function
 * write(int fd,const void "buf,size_t count)
 *
 * Return: 1 (not Success)
*/
int main(void)
{
	char ch[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, ch, 59);
	return (1);
}
