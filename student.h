#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student
{
    int roll;
    char name[30];
    float per;
    struct student *next;
}ST;

void stud_add(ST **);
void stud_del(ST **);
void stud_show(ST *);
void stud_mod(ST *);
void stud_sort(ST *);
void save_file(ST *);
void load_file(ST **);
