#include"header.h"
int getNextRoll(stu *ptr)
{
    int roll=1;
    stu *temp;

    while(1)
    {
        temp=ptr;
        int found=0;
        while(temp)
        {
            if(temp->rollno==roll)
            {
                found=1;
                break;
            }
            temp=temp->next;
        }
        if(!found)
        return roll;
        roll++;
    }
}