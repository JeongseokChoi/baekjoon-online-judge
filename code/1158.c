#include <stdio.h>
#include <stdlib.h>
#include <memory.h>


typedef struct node_t
{
	int num;
	struct node_t *next;
	struct node_t *prev;
} node_t;

static node_t *head = NULL, *tail = NULL;
static int seq[5000];


void initialize()
{
	head = malloc(sizeof(node_t));
	tail = malloc(sizeof(node_t));
	
	head->prev = head;
	head->next = tail;
	tail->prev = head;
	tail->next = tail;
}

void terminate()
{
	node_t *tmp = head;
	while (tmp->next != tail)
	{
		tmp = tmp->next;
		tmp->prev->next = tmp->next;
		tmp->next->prev = tmp->prev;
		free(tmp);
	}
	free(tail);
	free(head);
}

void insert(int num)
{
	node_t *tmp = malloc(sizeof(node_t));
	tmp->num = num;
	tmp->next = tail;
	tmp->prev = tail->prev;

	tail->prev->next = tmp;
	tail->prev = tmp;
}

void remove_node(node_t *p)
{
	p->prev->next = p->next;
	p->next->prev = p->prev;
	free(p);
}

int is_empty()
{
	return (head->next == tail);
}


int main()
{
	initialize();

	int n, m, idx = 0;
	scanf("%d %d", &n, &m);
	
	for (int i = 1; i <= n; i++)
		insert(i);

	node_t *tmp = head;
	while (!is_empty())
	{
		for (int i = 0; i < m; i++)
		{
			tmp = tmp->next;
			if (tmp == tail)
				tmp = head->next;
		}
		seq[idx++] = tmp->num;
		node_t *tmp2 = tmp->prev;
		remove_node(tmp);
		tmp = tmp2;
	}

	printf("<");
	for (int i = 0; i < idx - 1; i++)
		printf("%d, ", seq[i]);
	printf("%d>\n", seq[idx - 1]);

	terminate();
	return 0;
}