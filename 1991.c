#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct node_t
{
    char value;
    struct node_t *left;
    struct node_t *right;
} node_t, *tree_t;


static tree_t tree = NULL;


void insert(char p, char l, char r)  // (p)arent, (l)eft child, (r)ight child
{
    node_t *pos = find(p);
    if (pos == NULL)
    {
        tree = malloc(sizeof(node_t));
        tree->value = p;
        tree->left = NULL;
        tree->right = NULL;
        pos = tree;
    }

    node_t *tmp = NULL;

    tmp = malloc(sizeof(node_t));
    tmp->left->value = l;
    tmp->left->left = NULL;
    tmp->left->right = NULL;
    pos->left = tmp;

    tmp = malloc(sizeof(node_t));
    tmp->right->value = r;
    tmp->right->left = NULL;
    tmp->right->right = NULL;
    pos->right = tmp;
}


int main(int argc, char *argv[])
{
    return 0;
}
