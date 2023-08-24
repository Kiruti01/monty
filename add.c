#include "monty.h"
/**
 * f_add - adds the top 2 elements of the stack.
 * @head: linked lists stack head
 * @line_counter: line_number from file
 * Return: nothing
 */
void f_add(stack_t **head, unsigned int line_counter)
{
	stack_t *h;
	int sum = 0, aux;

	h = *head;
	while (h)
	{
		h = h->next;
		sum++;
	}
	if (sum < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->n + h->next->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
}
