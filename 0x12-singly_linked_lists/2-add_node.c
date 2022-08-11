#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * *add_node - - adds a new node at the beginning of a list_t
 * @head: first node pointer
 * @str: char pointer
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	char *string;
	list_t *node;

	if (!head || !str)
		return (0);

	string = strdup(str);

	if (!string)
		return (0);
	node = malloc(sizeof(list_t));
	if (!node)
		return (0);
	node->str = string;
	node->len = _strlen(string);
	node->next = *head;
	*head = node;
	return (node);
}
/**
 * _strlen - Swaps integers wih pointers.
 * @s: is a pointer to a char
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
