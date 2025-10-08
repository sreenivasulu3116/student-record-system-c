#include"header.h"
int getNextRoll(stu *);
void addNewRecord(stu **ptr)
{
    stu *new;

        new=malloc(sizeof(stu));
    new->rollno=getNextRoll(*ptr);

    printf(RED"enter name  marks:\n"RESET);
    scanf("%s%f",new->name,&new->marks);

    new->next=*ptr;
    *ptr=new;
}