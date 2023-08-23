#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STACK_SIZE 100

typedef struct {
	    int data[STACK_SIZE];
	        int top;
} Stack;

void push(Stack *stack, int value) {
	    /* ... (implementation) */
}

void pall(Stack *stack) {
	    /* ... (implementation) */
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
		return EXIT_FAILURE;
	}

	FILE *file = fopen(argv[1], "r");
	if (file == NULL)
	{
		fprintf(stderr, "Failed to open file: %s\n", argv[1]);
		return EXIT_FAILURE;
	}

	Stack stack;
	stack.top = 0;

	char opcode[20];
	int value;

	while (fscanf(file, "%s", opcode) != EOF)
	{
		if (strcmp(opcode, "push") == 0)
		{
			if (fscanf(file, "%d", &value) != 1)
			{
				fprintf(stderr, "Error: usage: push integer\n");
				fclose(file);
				return EXIT_FAILURE;
			}
			push(&stack, value);
		}
		else if (strcmp(opcode, "pall") == 0)
		{
			pall(&stack);
		}
		else
		{
			fprintf(stderr, "Unknown opcode: %s\n", opcode);
			fclose(file);
			return EXIT_FAILURE;
		}
	}

	fclose(file);
	return EXIT_SUCCESS;
}

