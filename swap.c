#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * swap - swaps data from top to previous in a unique way
 * @stack: stack given by main
 * @line_cnt: amount of lines
 *
 * Return: void
 */

void f_swap(stack_t **head, unsigned int counter)
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
    fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
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
