#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *link;
}h_t;

h_t *hash_table[10];


int hash(int key)
{
    return key%10;
}



void insert(int key)
{
    int index=hash(key);
    h_t *tmp=malloc(sizeof(h_t));
    tmp->data=key;
    tmp->link=hash_table[index];
    hash_table[index]=tmp;
}


void display(void)
{
    
    for(int i=0;i<10;i++)
    {
        
        h_t *tmp = hash_table[i];
        while(tmp!=NULL)
        {
            printf(" %d-->",tmp->data);
            tmp=tmp->link;
        }
         printf("\nNode is :NULL");
    }
}


int main()
{
    
    insert(10);
    insert(20);
    insert(30);
    display();
    return 0;
}
