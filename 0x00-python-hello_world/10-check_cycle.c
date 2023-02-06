#include "lists.h"

/**
 * check_cycle - check if the linked list contains a cycle
 * @list: linked list
 *
 * Return: 1 is the list has a cycle else return 0
 */

int check_cycle(listint_t *list)
{
	listint_t *slow = list;
	listint_t *fast = list;

	if(!list)
		return (0);

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (1);

	}

	return (0);
}
