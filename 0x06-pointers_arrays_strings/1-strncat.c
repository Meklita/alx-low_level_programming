#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: string 1
 * @src: string 2
 * @n: bytes from src to be appened
 *
 * Return: pointer to string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a1 = 0;
	int a2 = 0;

	while (dest[a1] != 0)
		a1++;
	while (a2 < n && src[a1] != 0)
	{
		dest[a1] = src[a2];
		a2++;
		a1++;
	}
	if (src[a2] == 0)
		dest[a1] = src[a2];
	return (dest);
}
