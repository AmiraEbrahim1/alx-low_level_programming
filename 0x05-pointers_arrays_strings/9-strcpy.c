#include"main.h"
/**
 *_strcpy - function copies the string pointed by
 * src, including the terminating null byte (\0)
 * @dest: function input
 * @src: function input
 * Return: the point to dest.
*/
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != "\0");
	return (dest);
}
