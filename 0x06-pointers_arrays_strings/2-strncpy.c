#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: string destination
 * @src: string to be copied
 * @n: number of bytes to be copied
 *
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (a < n && src[a] != 0)
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
