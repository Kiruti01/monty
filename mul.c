#include "monty.h"

/**
 * f_mul - multiplies the top two elements of the stack.
 * @head: stack head
 * @number: line_number
 * Return: nothing
 */
void f_mul(stack_t **head, unsigned int number)
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
        fprintf(stderr, "L%d: can't mul, stack too short\n", number);
        fclose(bus.file); // Assuming 'bus' is a global variable.
        free_bus_content(); // Assuming 'free_bus_content' is a function to free bus content.
        free_stack(*head);
        exit(EXIT_FAILURE);
    }
    
    h = *head;
    aux = h->next->n * h->n;
    h->next->n = aux;
    *head = h->next;
}

