#include"header.h"
void deleteAll(stu **ptr)
{
    if(*ptr==NULL)
    {
        printf("no records are present\n");
        return;
    }
    int c=1;
    stu *del=*ptr;
    while(del)
    {
        *ptr=del->next;
        printf("%d node deleted\n",c++);
        sleep(1);
        free(del);

        del=*ptr;
    }
    printf("all nodes deleted\n");
}