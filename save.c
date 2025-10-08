#include"header.h"
void saveFile(stu *ptr)
{
    if(ptr==NULL)
    {
        printf("no records are present\n");
        return;
    }
    FILE *fp;
    fp=fopen("student.dat","w");
    if(fp==NULL)
    {
        printf("file not opened\n");
        return;
    }
    while(ptr)
    {
        fprintf(fp,"%s %d %.2f\n",ptr->name,ptr->rollno,ptr->marks);
        ptr=ptr->next;
    }
    printf(GREEN"data saved successfully....\n"RESET);
    fclose(fp);
}