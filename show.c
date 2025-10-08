#include"header.h"
void showTheList(stu *ptr)
{
    if(ptr==0)
    {
        printf(BLUE"no records available\n"RESET);
        return;
    }

    while(ptr)
    {
        printf(GREEN"%s %d %.2f\n"RESET,ptr->name,ptr->rollno,ptr->marks);

        ptr=ptr->next;
    }
}