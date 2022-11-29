#ifndef LISTS_H
#define LISTS_H

#include <stio.h>

typedef struct listint_s
{
	int num;
	struct listint_s *next;
}listint_t;

size_t print_listint(cost listint_t *h);
listint_t *add_nodeint(listint_t **head, cost int num);
void free_listint(listint_t *head);

int list_cycle(listint *list);

#endif
