/* ±¸Çö Áß */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct node_t
{
	char data;
	struct node_t *next;
} *L_STACK, *R_STACK;


void initialize()
{
	L_STACK = malloc(sizeof(struct node_t));
	L_STACK->next = NULL;

	R_STACK = malloc(sizeof(struct node_t));
	R_STACK->next = NULL;
}


void terminate()
{
	struct node_t *tmp;

	while (L_STACK->next != NULL)
	{
		tmp = L_STACK->next;
		L_STACK->next = L_STACK->next->next;
		free(tmp);
	}

	while (R_STACK->next != NULL)
	{
		tmp = R_STACK->next;
		R_STACK->next = R_STACK->next->next;
		free(tmp);
	}

	free(L_STACK);
	free(R_STACK);
}


void push(char c, struct node_t *s)
{
	struct node_t *new_node = malloc(sizeof(struct node_t));
	new_node->data = c;
	new_node->next = s->next;

	s->next = new_node;
}


void pop(struct node_t *s)
{
	if (!is_empty(s))
	{
		struct node_t *tmp = s->next;
		s->next = s->next->next;
		free(tmp);
	}
}


int is_empty(struct node_t *s)
{
	return (s->next == NULL);
}