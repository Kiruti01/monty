#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * f_swap - swaps data from top to previous in a unique way
 * @head: stack given by main
 * @number: amount of lines
 *
 * Return: void
 */

void f_swap(stack_t **head, unsigned int number)
{
	stack_t *h;
	int len = 0, aux;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->n;
	h->n = h->next->n;
	h->next->n = aux;
}
