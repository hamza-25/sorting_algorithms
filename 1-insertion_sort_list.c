#include "sort.h"

/**
 *
 *
 *
*/

void insertion_sort_list(listint_t **list)
{
	listint_t *current = *list, *tmp, *mov;

	if (!list || !current)
		return;
	current = current->next;
	while (current)
	{
		mov = current;
		while (mov && mov->n < mov->prev->n)
		{
			tmp = mov->prev;
		/*if (mov->prev == NULL)
		{
			tmp = mov->prev;
			mov->prev->next = mov->next;
			mov->next->prev = tmp;
			mov->next = tmp;
			mov->prev = NULL
			mov = tmp->next;
			continue;
		}
		if (mov->next == NULL)
		{
			tmp = mov->prev;
			mov->prev = mov->prev->prev;
			mov->prev->prev->next = mov;
			mov->prev->prev = mov;
			mov->next = mov->prev;
			mov->prev->next = NULL;
			mov = tmp->next;
			continue;
		}*/
	mov->prev = tmp->prev;
         tmp->next = mov->next;

            if (tmp->next != NULL)
                tmp->next->prev = tmp;

            mov->next = tmp;
            tmp->prev = mov;

            if (mov->prev != NULL)
                mov->prev->next = mov;
            else
                *list = mov;
		mov = tmp;
		}
	 current = current->next;
	}
}
