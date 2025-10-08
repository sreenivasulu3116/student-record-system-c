//#include<stdio.h>
#include"header.h"

int main()
{
    stu *head=0;
    char op;

    while(1)
    {

    printf("a/A  : add new record\nd/D  : delete a record\ns/S  : show the list\nm/M  : modify a record\nv/V  : save\ne/E  : exit\nt/T  : sort the list\nl/L  : delete all the records\nr/R  : reverse the list\n");
    printf(YELLOW"enter your choice:\n"RESET);
   
    scanf(" %c",&op);

    
    switch(op)
    {
        case 'a':
        case 'A':addNewRecord(&head);break;

        case 'd':
        case 'D':
        {
                char sub_op;
                printf("r/R  :enter roll to delete\nn/N  : enter name to delete\n");
                printf(YELLOW"enter your choice:\n"RESET);
                scanf(" %c",&sub_op);
                switch(sub_op)
                {
                    case 'r':
                    case 'R':delRoll(&head);break;

                    case 'n':
                    case 'N':delName(&head);break;

                    default:printf(RED"invalid option"RESET);break;
                }
        }break;
               

        case 's':
        case 'S':showTheList(head);break;

        case 'm':
        case 'M':
                    {
                        char sub_op;
                        printf(YELLOW"enter which record to search to modify:\n"RESET);
                        printf("r/R  : to serach a rollno\nn/N  : to search a name\np/p  : percentage based\n");
                        scanf(" %c",&sub_op);

                        switch(sub_op)
                        {
                            case 'r':
                            case 'R':searchByRoll(&head);break;

                            case 'n':
                            case 'N':searchByName(&head);break;

                            case 'p':
                            case 'P':searchByPer(&head);break;

                            default:printf(RED"invalid option"RESET);break;
                        }
                    }break;
        
        case 'v':
        case 'V':saveFile(head);break;

        case 'e':
        case 'E':
                    {
                        char sub_op;
                        printf("***exit menu***\n");
                        printf("s/S  : save and exit\ne/E  : exit without save\n");
                        printf("enter your choice:\n");
                        scanf(" %c",&sub_op);

                        switch(sub_op)
                        {
                            case 's':
                            case 'S':saveFile(head);exit(0);

                            case 'e':
                            case 'E':exit(0);
                                    

                            default:printf(RED"invalid option\n"RESET);
                        }
                    }break;
        
        case 't':
        case 'T':
                    {
                        char sub_op;
                        printf("***SORT MENU***\n");
                        printf("n/N  : sort with name\np/P  : sort with per\n");
                        printf(YELLOW"enter your choice\n"RESET);
                        scanf(" %c",&sub_op);

                        switch(sub_op)
                        {
                            case 'n':
                            case 'N':sortByName(&head);break;

                            case 'p':
                            case 'P':sortByPer(&head);break;

                            default:printf(RED"invalid option"RESET);break;

                        }
                    }break;

        case 'l':
        case 'L':deleteAll(&head);break;
        
        case 'r':
        case 'R':reverseLink(&head);break;

        default:printf(RED"enter correct option\n"RESET);break;

    }





    }

}