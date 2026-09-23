#include<stdio.h>
#include<stdlib.h>


typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
}tr_t;

void display(tr_t* root)
{
    if(root==NULL)
    {
        printf("\nno node available\n");
        return ;
    }
    else
    {
        printf("%d--",root->data);
    }
    
    display(root->left);
    display(root->right);
    
}

int main()
{
    tr_t *root=malloc(sizeof(tr_t));
    tr_t *node1=malloc(sizeof(tr_t));
    tr_t *node2=malloc(sizeof(tr_t));
    tr_t *node3=malloc(sizeof(tr_t));
    tr_t *node4=malloc(sizeof(tr_t));
    
    root->data=10;
    node1->data=20;
    node2->data=30;
    node3->data=40;
    node4->data=50;
    
    root->left=node1;
    root->right=node2;
    node1->left=node3;
    node1->right=node4;
    node2->left=NULL;
    node2->right=NULL;
    node3->left=NULL;
    node3->right=NULL;
    node4->left=NULL;
    node4->right=NULL;
    
    display(root);
    
    return 0;
}

