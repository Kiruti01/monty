*Return:nothing
*/
void f_mul(stack_t **head,unsigned int number);
{
	stack_h *h;
	int len = 0,aux;
	
	h = *head;
	while(h)
	{
		h = h->next;
		len ++;
	}
	if(len < 2)
	{
		fprintf(stderr,"L%d:can't mul,stack too short\n"number);
		fclose(bus.file);
		freebus.content);
		free_stack(*head);
		exit(EXIT_FAILURE):
	}
	h = *head;
	aux = h->next ->n *h->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
}
