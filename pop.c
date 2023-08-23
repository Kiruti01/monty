#include "monty.h"

/**
 * f_pop - Removes the top element from the stack
 * @head: Pointer to the stack head
 * @number: Line number
 * Return: void
 */

void f_pop(stack_t **head, unsigned int number)
{
    stack_t *top = *head;

    if (top == NULL)
    {
        fprintf(stderr, "L%d: Can't pop an empty stack\n", number);
        fclose(bus.file);
        free(bus.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }

    *head = top->next;
    free(top);
}
