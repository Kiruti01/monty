#include "monty.h"

/**
 * pint - print the value at the top of the stack
 * @shead: stack given by main in start.c
 * @number: amount of lines
 * Return: void
 */
void pint(stack_t **head, unsigned int number)
{
	if (!head || !(*head))
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
