#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

void delete_node(struct node *p)
{
    struct node *temp;

    if (p == NULL || p->link == NULL)
    {
        printf("Deletion is not possible\n");
        return;
    }

    temp = p->link;

    p->data = temp->data;
    p->link = temp->link;

    free(temp);
}
