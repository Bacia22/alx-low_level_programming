#include "lists.h"
/**
 * listint_len - returns the numbers of elements in the linked lists
 * @h: linked list of type listint_t to travers
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
