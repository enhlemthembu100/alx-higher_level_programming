#include "lists.h"
#include <stdlib.h>

/**
 * check_cycle - check for the loop
 * @list: pointer of list
 * Return: 0 if there is no cycle, 1 if there is a cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *first, *second;

	if (list == NULL || list->next == NULL)
		return  (0);

	first = list->next;
	second = list->next->next;

	while (first && second && second->next)
	{
		if (first == second->next)
		{
			return (1);
		}
		first = first->next;
		second = second->next->next;
	}
	return (0);
}
