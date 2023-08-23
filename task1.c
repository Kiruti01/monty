#include "monty.h"

/**
 * f_div - divides the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
 */
void f_div(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int len = 0, aux;

	/* Count the number of elements in the stack */
	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}

	/* Check if there are at least 2 elements in the stack */
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	/* Reset the temporary pointer to the stack head */
	h = *head;

	/* Check for division by zero */
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	/* Perform division on the top two elements */
	aux = h->next->n / h->n;
	h->next->n = aux;

	/* Update the head pointer to the next element */
	*head = h->next;

	/* Free the old top element */
	free(h);
}
