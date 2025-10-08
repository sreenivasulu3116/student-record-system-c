#include"header.h"
void reverseLink(stu **ptr)
{
    if(*ptr==NULL)
    {
        printf("no records are present\n");
        return;
    }

    int c=countNode(*ptr);

   // if(c>1)
    stu **arr=malloc(sizeof(stu*)*c);

    stu *t=*ptr;
    int i=0;

    while(t)
    {
        arr[i++]=t;
        t=t->next;
    }

    for(i=c-1;i>=1;i--)
    {
        arr[i]->next=arr[i-1];

    }
    arr[0]->next=0;
    *ptr=arr[c-1];
}