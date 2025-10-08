#include"header.h"
void searchByRoll(stu **ptr)
{
    if(*ptr==NULL)
    {
        printf("no records are present\n");
        return;
    }
int num;
printf(YELLOW"eneter the rollno to modify:\n"RESET);
scanf(" %d",&num);
stu *mod=*ptr;

while(mod)
{
    if(mod->rollno==num)
    {
        char name[20];
        float per;

        printf("enter the new name and percentage:\n");
        scanf(" %s%f",name,&per);

        strcpy(mod->name,name);
        mod->marks=per;

        return;
    }
    mod=mod->next;
}
printf(RED"roll number not found\n"RESET);
}


void searchByName(stu **ptr)
{
    
    if(*ptr==NULL)
    {
        printf("no records are present\n");
        return;
    }
    stu *mod=*ptr;
int found=0,c=0;
char name [20];
printf(YELLOW "enter the name:\n"RESET);
scanf(" %s",name);
    while(mod)
    {
        if(strcmp(mod->name,name)==0)
        {
            found=1;
            c++;
        }
        mod=mod->next;
    }
    if(c==1)
    {
        stu *mod=*ptr;

while(mod)
{
     if(strcmp(mod->name,name)==0)
    {
        char name[20];
        float per;

        printf("enter the new name and percentage:\n");
        scanf(" %s%f",name,&per);

        strcpy(mod->name,name);
        mod->marks=per;

        return;
    }
    mod=mod->next;
}
    }
    else if(c>1)
    {
        mod=*ptr;
        while(mod)
        {
            if(strcmp(mod->name,name)==0)
            printf("%s %d %.2f\n",mod->name,mod->rollno,mod->marks);
        
        mod=mod->next;
        }
        searchByRoll(ptr);
    }


if(!found)
printf(RED"name not found\n"RESET);
}


void searchByPer(stu **ptr)
{
    
    if(*ptr==NULL)
    {
        printf("no records are present\n");
        return;
    }

stu *mod=*ptr;
int found=0,c=0;
float per;
printf(YELLOW "enter the percentage:\n"RESET);
scanf(" %f",&per);
    while(mod)
    {
        if(fabs(mod->marks-per)<0.01)
        {
            found=1;
            c++;
        }
        mod=mod->next;
    }
    if(c==1)
    {
        stu *mod=*ptr;

while(mod)
{
      if(fabs(mod->marks-per)<0.01)
    {
        char name[20];
        float newper;

        printf("enter the new name and percentage:\n");
        scanf(" %s%f",name,&newper);

        strcpy(mod->name,name);
        mod->marks=per;

        return;
    }
    mod=mod->next;
}
    }
    else if(c>1)
    {
        mod=*ptr;
        while(mod)
        {
            if(mod->marks==per)
            printf("%s %d %.2f\n",mod->name,mod->rollno,mod->marks);
        
        mod=mod->next;
        }
        searchByRoll(ptr);
    }


if(!found)
printf(RED"percentage not found\n"RESET);


}