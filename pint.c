#include "monty.h"

/**
 * f_pint - print the value at the top of the stack
 * @head: stack head
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
