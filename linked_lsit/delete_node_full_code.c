/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *link;
}_t;

_t *root=NULL;
_t *appnd(_t* str, int data);
void disp(_t *str);
_t *delet(_t* str,int data);

_t *rev(_t *str);
int main()
{
    root=appnd(root,10);
    root=appnd(root,20);
    root=appnd(root,30);
    root=appnd(root,40);
    root=appnd(root,50);
    root=appnd(root,60);
    root=appnd(root,70);
    disp(root);
    printf("\n");
    root=delet(root,70);
    disp(root);
    printf("\n");
    root=rev(root);
    disp(root);
    return 0;
}

_t *rev(_t *str)
{
    _t *nxt=NULL;
    _t *pre=NULL;
    _t *head=str;
    
    
    if(str==NULL)
    {
        printf("NO data foud\n");
        return str;
    }
    else
    {
        while(head!=NULL)
        {
            nxt=head->link;
            head->link=pre;
            pre=head;
            head=nxt;
        }
        return pre;
    }
}

_t *delet(_t* str,int data)
{
    _t *p=str,*temp,*p1;
    if(str==NULL)
    {
        printf("No node available for delete\n");
        return str;
    }
    if(p->link==NULL)
    {
        if(p->data==data)
        {
            str=NULL;
            free(p);
        }
    }
    else
    {
        while(p!=NULL && p->data!=data)
        {
            p1=p;
            p=p->link;
        }
        if(p->data==data)
        {
            if(p->link==NULL)
            {
                temp=p;
                p1->link=NULL;
                free(temp);
                return str;
            }
            temp=p->link;
            p->data=temp->data;
            p->link=temp->link;
            free(temp);
        }
        return str;
    }
}

void disp(_t *str)
{
    _t *p=str;
    if(str==NULL)
    {
        printf("No node available\n");
        return;
    }
    else
    {
        while(p!=NULL)
        {
            printf("%d--->",p->data);
            p=p->link;
        }
    }
}


_t *appnd(_t* str, int data)
{
    _t* temp, *p=str;
    
    temp=malloc(sizeof(_t));
    temp->data=data;
    temp->link=NULL;
    if(str==NULL)
    {
        str=temp;
        return str;
    }
    else
    {
        while(p->link!=NULL)
        {
            p=p->link;
        }
        p->link=temp;
    }
    return str;
}
