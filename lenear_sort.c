#include <stdio.h>

int main()
{
    int arr[]={1,2,3,4,1,3,4};
    int len=sizeof(arr)/sizeof(int);
    // printf("%d",len);
    int frq[10]={0};
    for(int i=0;i<len;i++)
        frq[arr[i]]++;
        
    for(int i=0;i<10;i++)
    {
        if(frq[i]>0)
        {
            printf("%d-->%d\n",i,frq[i]);
        }
    }
 

    return 0;
}
