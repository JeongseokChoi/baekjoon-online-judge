#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define TRUE 1
#define FALSE 0


struct deque_node_t
{
	int val;
	struct deque_node_t *prev;
	struct deque_node_t *next;
} *HEAD, *TAIL;


void push_front(int val);
void push_back(int val);
int pop_front();
int pop_back();
int size();
int empty();
int front();
int back();


char *command[] =
{
	"push_front",
	"push_back",
	"pop_front",
	"pop_back",
	"size",
	"empty",
	"front",
	"back" 
};

enum command_no_t
{
	PUSH_FRONT = 0,
	PUSH_BACK = 1,
	POP_FRONT = 2,
	POP_BACK = 3,
	SIZE = 4,
	EMPTY = 5,
	FRONT = 6,
	BACK = 7
};


void initialize();
void terminate();


int main(int argc, char *argv[])
{
	initialize();

	char input[32];
	int n_case, command_no, value;

	fgets(input, 32, stdin);
	sscanf(input, "%d", &n_case);
	for (int i_case = 0; i_case < n_case; i_case++)
	{
		command_no = -1;
		memset(input, 0, sizeof(input));

		fgets(input, 32, stdin);
		for (int i = 0; i < sizeof(command) / sizeof(char*); i++)
		{
			if (strncmp(input, command[i], strlen(command[i])) == 0)
			{
				command_no = i;
				break;
			}
		}

		switch (command_no)
		{
		case PUSH_FRONT:
			sscanf(input, "%*s %d", &value);
			push_front(value);
			break;
		case PUSH_BACK:
			sscanf(input, "%*s %d", &value);
			push_back(value);
			break;
		case POP_FRONT:
			printf("%d\n", pop_front());
			break;
		case POP_BACK:
			printf("%d\n", pop_back());
			break;
		case SIZE:
			printf("%d\n", size());
			break;
		case EMPTY:
			printf("%d\n", empty());
			break;
		case FRONT:
			printf("%d\n", front());
			break;
		case BACK:
			printf("%d\n", back());
			break;

		}
	}
	
	terminate();
	return 0;
}


void push_front(int val)
{
	struct deque_node_t *new_node = malloc(sizeof(struct deque_node_t));
	new_node->prev = HEAD;
	new_node->next = HEAD->next;
	new_node->val = val;
	
	HEAD->next->prev = new_node;
	HEAD->next = new_node;
}

void push_back(int val)
{
	struct deque_node_t *new_node = malloc(sizeof(struct deque_node_t));
	new_node->prev = TAIL->prev;
	new_node->next = TAIL;
	new_node->val = val;

	TAIL->prev->next = new_node;
	TAIL->prev = new_node;
}

int pop_front()
{
	if (empty() == TRUE)
		return -1;

	int ret_val = HEAD->next->val;

	struct deque_node_t *tmp = HEAD->next;
	tmp->prev->next = tmp->next;
	tmp->next->prev = tmp->prev;
	free(tmp);

	return ret_val;
}

int pop_back()
{
	if (empty() == TRUE)
		return -1;

	int ret_val = TAIL->prev->val;

	struct deque_node_t *tmp = TAIL->prev;
	tmp->prev->next = tmp->next;
	tmp->next->prev = tmp->prev;
	free(tmp);

	return ret_val;
}

int size()
{
	int cnt = 0;
	struct deque_node_t *iter = HEAD->next;
	while (iter != TAIL)
	{
		cnt += 1;

		iter = iter->next;
	}
	return cnt;
}

int empty()
{
	if (size() == 0)
		return TRUE;
	else
		return FALSE;
}

int front()
{
	if (empty() == TRUE)
		return -1;

	return HEAD->next->val;
}

int back()
{
	if (empty() == TRUE)
		return -1;

	return TAIL->prev->val;
}


void initialize()
{
	HEAD = malloc(sizeof(struct deque_node_t));
	TAIL = malloc(sizeof(struct deque_node_t));

	HEAD->prev = HEAD;
	HEAD->next = TAIL;
	TAIL->prev = HEAD;
	TAIL->next = TAIL;
}

void terminate()
{
	struct deque_node_t *iter = HEAD->next;
	struct deque_node_t *tmp = NULL;
	while (iter != TAIL)
	{
		tmp = iter;
		iter = iter->next;

		tmp->prev->next = tmp->next;
		tmp->next->prev = tmp->prev;
		free(tmp);
	}
	free(HEAD);
	free(TAIL);
}