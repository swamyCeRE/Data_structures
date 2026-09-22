// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>
#include <stdlib.h>

typedef struct node 
{
    int data;
    struct node  *link;
 }_t;

_t *root=NULL;

_t *rev(_t * str)
{
    _t *pr =NULL;
    _t *next =NULL;
    _t *corr =str;

    while(corr!=NULL)
        {
            next=corr->link;
            corr->link=pr;
            pr=corr;
            corr=next;
        }
    return pr;
}
void display(_t *str)
{
    _t *tmp=str;
        while(tmp!=NULL)
        {
            printf("%d---",tmp->data);
            tmp=tmp->link;
        }
}
_t *append(_t *str,int data)
{
    // printf("entered\n");
    _t *tmp,*p=str;
    tmp=malloc(sizeof(int));
    tmp->data=data;
    tmp->link=NULL;

    if(str==NULL)
    {
        str=tmp;
        return str;   
    }
    else
    {
            while(p->link!=NULL)
            {
                 p=p->link;               
            }
            p->link=tmp;
    }
  return str;
}
void ap_disp(_t *str)
{
    _t *p=str;
    if(str==NULL)
    {
        printf("no node available \n");
    }
    else
    {
        while(p!=NULL)
        {
            printf("%d--",p->data);
            p=p->link;
        }
    }
}
int main() {


    root=append(root,10);
    root=append(root,20);
    root=append(root,30);
    root=append(root,40);
    // ap_disp(root);
    root=rev(root);
    display(root);

    eprintf("Try clicking the Run button.");
    return 0;
}