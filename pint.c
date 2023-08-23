#include "monty.h"

/**
 * pint - print the value at the top of the stack
 * @shead: stack given by main in start.c
 * @number: amount of lines
 * Return: void
 */
void f_pint(stack_t **head, unsigned int number)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
