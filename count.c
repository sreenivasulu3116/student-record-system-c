#include"header.h"
int countNode(stu *ptr)
{
    if(ptr==NULL)
    {
        printf("no records are present\n");
        return 0;
    }
int c=0;
    while(ptr)
    {
        c++;
        ptr=ptr->next;
    }
    return c;
}