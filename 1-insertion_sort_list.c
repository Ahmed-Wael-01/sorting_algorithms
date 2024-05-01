#include "sort.h"
/**
 * insertion_sort_list - it should work
 * @list: the list that should be sorted
 * Description: it sorts an array in numberic order
 * Return: sorted array
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *Current;
	listint_t *Prev;
	listint_t *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	Current = (*list)->next;
	while (Current != NULL)
	{
		Prev = Current->prev;
		while (Prev != NULL && Prev->n > Current->n)
		{
			temp = Prev->prev;
			Prev->prev = Current;
			Current->prev = temp;
			if (temp)
				temp->next = Current;
			Prev->next = Current->next;
			if (Current->next)
				Current->next->prev = Prev;
			Current->next = Prev;
			if (Prev == *list)
				*list = Current;
			temp = *list;
			while (temp != NULL)
			{
				printf("%d", temp->n);
				if (temp->next != NULL)
					printf(", ");
				temp = temp->next;
			}
			printf("\n");
			Prev = Current->prev;
		}
		Current = Current->next;
	}
}
