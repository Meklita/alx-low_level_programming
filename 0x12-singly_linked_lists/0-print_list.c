#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints elements
 * @h: pointer
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int j = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		j++;
	}
	return (j);
}
