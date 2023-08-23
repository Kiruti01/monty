#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list rep of stack or queue
 * @n: integer
 * @prev: points to previous element of stack or queue
 * @next: points to next element of the stack or queue
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct bus_s - variables -args, file, line content
 * @arg: value
 * @file: pointer to monty file
 * @content: line content
 * @lifi: flag change stack <-> queue
 * Description: carries values through the program
 */
typedef struct bus_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  bus_t;
extern bus_t bus;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO project
 */

typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char  *clean_line(char *content);
void pf_push(stack_t **head, unsigned int number);
void pf_pall(stack_t **head, unsigned int number);
void pf_pint(stack_t **head, unsigned int number);
int execute(char *content, stack_t **head, unsigned int counter, FILE *file);
void free_stack(stack_t *head);
void pf_pop(stack_t **head, unsigned int counter);
void pf_swap(stack_t **head, unsigned int counter);
void pf_add(stack_t **head, unsigned int counter);
void pf_nop(stack_t **head, unsigned int counter);
void pf_sub(stack_t **head, unsigned int counter);
void pf_div(stack_t **head, unsigned int counter);
void pf_mul(stack_t **head, unsigned int counter);
void pf_mod(stack_t **head, unsigned int counter);
void pf_pchar(stack_t **head, unsigned int counter);
void pf_pstr(stack_t **head, unsigned int counter);
void pf_rotl(stack_t **head, unsigned int counter);
void pf_rotr(stack_t **head, __attribute__((unused)) unsigned int counter);
void addnode(stack_t **head, int n);
void addqueue(stack_t **head, int n);
void pf_queue(stack_t **head, unsigned int counter);
void pf_stack(stack_t **head, unsigned int counter);
#endif
