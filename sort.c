#include"header.h"
void sortByName(stu **ptr)
{
if(*ptr==NULL)
{
    printf("no records are present\n");
    return;
}

int c=countNode(*ptr);

stu *p1=*ptr,*p2,t;

int i,j;

for(i=0;i<c-1;i++)
{
    p2=p1->next;
    for(j=0;j<c-1-i;j++)
    {
        if(strcmp(p1->name,p2->name)>0)
        {
            t.rollno=p1->rollno;
            strcpy(t.name,p1->name);
            t.marks=p1->marks;

            p1->rollno=p2->rollno;
            strcpy(p1->name,p2->name);
            p1->marks=p2->marks;

            p2->rollno=t.rollno;
            strcpy(p2->name,t.name);
            p2->marks=t.marks;
        }
        p2=p2->next;
    }
    p1=p1->next;
}
printf(GREEN "List sorted successfully by name.\n" RESET);

}



void sortByPer(stu **ptr)
{
if(*ptr==NULL)
{
    printf("no records are present\n");
    return;
}

 int c=countNode(*ptr);

stu *p1=*ptr,*p2,t;

int i,j;

for(i=0;i<c-1;i++)
{
    p2=p1->next;
    for(j=0;j<c-1-i;j++)
    {
        if(p1->marks>p2->marks)
        {
            t.rollno=p1->rollno;
            strcpy(t.name,p1->name);
            t.marks=p1->marks;

            p1->rollno=p2->rollno;
            strcpy(p1->name,p2->name);
            p1->marks=p2->marks;

            p2->rollno=t.rollno;
            strcpy(p2->name,t.name);
            p2->marks=t.marks;
        }
        p2=p2->next;
    }
    p1=p1->next;
}
printf(GREEN "List sorted successfully by per.\n" RESET);

}