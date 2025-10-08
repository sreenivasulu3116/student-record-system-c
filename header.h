#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<math.h>


#define RESET   "\033[0m"
#define RED     "\033[1;31m"
#define GREEN   "\033[1;32m"
#define YELLOW  "\033[1;33m"
#define BLUE    "\033[1;34m"
#define MAGENTA "\033[1;35m"
#define CYAN    "\033[1;36m"
#define WHITE   "\033[1;37m"

typedef struct st
{
    char name[20];
    int rollno;
    float marks;

    struct st *next;
}stu;
int getNextRoll(stu *);
void addNewRecord(stu **);
void showTheList(stu *);
void delRoll(stu **);
void delName(stu **);
void searchByRoll(stu **);
void searchByName(stu **);
void searchByPer(stu **);
void saveFile(stu *);
void sortByName(stu **);
void sortByPer(stu **);
int countNode(stu *);
void reverseLink(stu **);
void deleteAll(stu **);