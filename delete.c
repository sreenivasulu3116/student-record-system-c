#include"header.h"
void delRoll(stu **ptr)
{
    if(*ptr==0)
    {
        printf(BLUE"no records present\n"RESET);

        return;
    }

    int num;
    printf("enter rollno you want to delete:\n");
    scanf("%d",&num);

    stu *del=*ptr,*prev;
    while(del)
    {
        if(del->rollno==num)
        {
            if(del==*ptr)
            *ptr=del->next;

            else
            prev->next=del->next;

            free(del);
            return;

        }
        prev=del;
        del=del->next;
    }
    printf(BLUE"roll number not found\n"RESET);
}


void delName(stu **ptr)
{
    if(*ptr==0)
    {
        printf(BLUE"no records are present\n"RESET);
        return;
    }
    char name[20];
    printf("enter the name to delete\n");
    scanf(" %s",name);
    stu *del=*ptr,*prev;

    int found=0,c=0;
    while(del)
    {
        if(strcmp(del->name,name)==0)
        {
            c++;
          found=1;
          //printf("%s %d %.0f\n",del->name,del->rollno,del->marks);  
        }
    
        del=del->next;
    }
    if(c==1)
    {
        del=*ptr;
        prev=NULL;
        while(del)
        {
            if(strcmp(del->name,name)==0)
            {
                if(del==*ptr)
                {

                
                *ptr=del->next;
            }
            else
            prev->next=del->next;
        
            free(del);
            return;
        }
        
        prev=del;
        del=del->next;
    }
    }
    else if(c>1)
    {
        del=*ptr;
        while(del)
        {
            if(strcmp(del->name,name)==0)
            {
                printf("%s %d %.2f\n",del->name,del->rollno,del->marks);
            }
            del=del->next;
        }

        delRoll(ptr);

    }

    if(!found)
    printf(BLUE"name not found"RESET);
}