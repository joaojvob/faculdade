#include <stdlib.h>
#include <stdio.h>

typedef struct node *link;

typedef struct node
{
    char *key;
    int b;
    link left, right;
} node;