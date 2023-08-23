#include "monty.h"
/**
 * pf_pall - prints stack
 * @head: stack head
 * @number: num used
 * Return: num return
*/
void pf_pall(stack_t **head, unsigned int number)
{
	stack_t *h;
	(void)number;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
