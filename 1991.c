#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct node_t
{
    char value;
    struct node_t *left;
    struct node_t *right;
} node_t;


node_t *tree = NULL;
node_t *leaf = NULL;


/* 내부 동작을 구현하는 재귀함수 set */
static node_t *create_node(char value);
static node_t *rec_find(node_t *tree, char value);
static void rec_preorder(node_t *tree);
static void rec_inorder(node_t *tree);
static void rec_postorder(node_t *tree);
static void rec_destroy(node_t *tree);

/* 기능 구현 */
void init();  // 바이너리 트리 사용을 위한 초기화
void insert(char p, char l, char r);  // (p)arent, (l)eft child, (r)ight child.
void print();
void destroy();


int main()
{
    init();

    char buf[16];
    fgets(buf, 16, stdin);
    int n = atoi(buf);
    for (int i = 0; i < n; i++)
    {
        char p, l, r;
        fgets(buf, 16, stdin);
        p = strtok(buf, " \n")[0];
        l = strtok(NULL, " \n")[0];
        r = strtok(NULL, " \n")[0];
        insert(p, l, r);
    }
    print();

    destroy();
    return 0;
}


void init()
{
    tree = NULL;

    leaf = malloc(sizeof(node_t));
    leaf->value = '.';
    leaf->left = leaf;
    leaf->right = leaf;
}

void insert(char p, char l, char r)  // (p)arent, (l)eft child, (r)ight child.
{
    if (tree == NULL)  // first insert
    {
        tree = create_node(p);
        tree->left = (l == '.')? leaf : create_node(l);
        tree->right = (r == '.')? leaf : create_node(r);
    }
    else
    {
        node_t *pos = NULL;
        if ((pos = rec_find(tree, p)) == leaf)
        {
            perror("IMPOSSIBLE\n");
            exit(1);
        }
        pos->left = (l == '.')? leaf : create_node(l);
        pos->right = (r == '.')? leaf : create_node(r);
    }
}

void print()
{
    rec_preorder(tree);
    printf("\n");
    rec_inorder(tree);
    printf("\n");
    rec_postorder(tree);
    printf("\n");
}

void destroy()
{
    rec_destroy(tree);
    free(leaf);
}


static node_t *create_node(char value)
{
    node_t *node = malloc(sizeof(node_t));
    node->value = value;
    node->left = leaf;
    node->right = leaf;
    return node;
}

static node_t *rec_find(node_t *tree, char value)
{
    if (tree == leaf) return leaf;
    if (tree->value == value) return tree;

    node_t *ret = leaf;
    if (tree->left != leaf)
        if ((ret = rec_find(tree->left, value)) != leaf)
            return ret;
    if (tree->right != leaf)
        if ((ret = rec_find(tree->right, value)) != leaf)
            return ret;
    return ret;
}

static void rec_preorder(node_t *tree)
{
    if (tree != leaf)
        printf("%c", tree->value);
    if (tree->left != leaf)
        rec_preorder(tree->left);
    if (tree->right != leaf)
        rec_preorder(tree->right);
}

static void rec_inorder(node_t *tree)
{
    if (tree->left != leaf)
        rec_inorder(tree->left);
    if (tree != leaf)
        printf("%c", tree->value);
    if (tree->right != leaf)
        rec_inorder(tree->right);
}

static void rec_postorder(node_t *tree)
{
    if (tree->left != leaf)
        rec_postorder(tree->left);
    if (tree->right != leaf)
        rec_postorder(tree->right);
    if (tree != leaf)
        printf("%c", tree->value);
}

static void rec_destroy(node_t *tree)
{
    if (tree->left != leaf) rec_destroy(tree->left);
    if (tree->right != leaf) rec_destroy(tree->right);
    if (tree != leaf) free(tree);
}
