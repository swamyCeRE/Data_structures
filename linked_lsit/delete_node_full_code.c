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

_t *append(_t *str, int data);
void disp(_t *str);
_t *delete(_t *str, int data);
int main()
{    
    
    root=append(root,10);
    root=append(root,20);
    root=append(root,30);
    root=append(root,40);
    root=append(root,50);
    disp(root);
    root=delete(root,10);
    printf("\n++++++++++++++\n");
    disp(root);

    return 0;
}

_t *delete(_t *str, int data)
{
    _t *p=str;
    _t *p1=NULL;
    _t *temp=NULL;
    
    if(str==NULL)
    {
        printf("No data available\n");
        return str;
    }
    if(p->link==NULL)
    {
        free(p);
        str=NULL;
        return str;
    }
    else
    {
        while(p->link!=NULL && p->data!=data)
        {
            p1=p;
            // printf("\n%d\n",p1->data);
            p=p->link;
            //  printf("\n%d\n",p->data);
        }
        if(p->link==NULL)
        {
            temp=p;
            p1->link=NULL;
            free(temp);
            return str;
        }
        else
        {
            temp=p->link;
            p->data=temp->data;
            p->link=temp->link;
            
            return str;
            
        }
    }
}
void disp(_t *str)
{
    _t *p=str;
    
    if(str==NULL)
    {
        printf("No data available in disap\n");
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
_t *append(_t *str, int data)
{
    _t *temp=malloc(sizeof(_t));
    _t *p=str;
    
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
     return str;
    }
   
}
