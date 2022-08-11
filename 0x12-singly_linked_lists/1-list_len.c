#include <stdio.h>
#include "lists.h"

/**
 * list_len - a function that returns the number of elements.
 *
 * @h: pointer
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t  t = 0;
	const list_t *node = h;

	while (node)
	{
		node = node->next;
		t++;
	}
	return (t);
}
