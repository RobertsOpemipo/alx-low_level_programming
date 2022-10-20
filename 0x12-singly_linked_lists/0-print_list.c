#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - prints list.
 * @h: param list
 * Return: struct
 */

size_t print_list(const list_t *h)
{
size_t cont = 0;

while (h != NULL)
{
	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
		h = h->next;
		cont++;
	}
	else
	{
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		cont++;
	}
}
return (cont);
}
