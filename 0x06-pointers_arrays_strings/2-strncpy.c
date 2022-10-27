#include "main.h"

/**
 * _strncpy - string copy
 * @dest: where src is copied
 * @src: string to be copied
 * @n: number of bytes
 * Return: returns destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
