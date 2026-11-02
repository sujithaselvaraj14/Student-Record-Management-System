#include <string.h>
#include "student.h"

void sort_roll(ST *);
void sort_name(ST *);
void sort_percentage(ST *);

void stud_sort(ST *ptr)
{
    char ch;

    printf("\nR/r : Sort by Roll Number");
    printf("\nN/n : Sort by Name");
    printf("\nP/p : Sort by Percentage");
    printf("\nEnter Your Choice : ");
    scanf(" %c", &ch);

    switch(ch)
    {
        case 'R':
        case 'r':
            sort_roll(ptr);
            break;

        case 'N':
        case 'n':
            sort_name(ptr);
            break;

        case 'P':
        case 'p':
            sort_percentage(ptr);
            break;

        default:
            printf("Invalid Choice\n");
    }
}

void sort_roll(ST *ptr)
{
    ST *p1, *p2;
    int t_roll;
    float t_per;
    char t_name[20];

    for(p1 = ptr; p1; p1 = p1->next)
    {
        for(p2 = p1->next; p2; p2 = p2->next)
        {
            if(p1->roll > p2->roll)
            {
                t_roll = p1->roll;
                p1->roll = p2->roll;
                p2->roll = t_roll;

                strcpy(t_name, p1->name);
                strcpy(p1->name, p2->name);
                strcpy(p2->name, t_name);

                t_per = p1->per;
                p1->per = p2->per;
                p2->per = t_per;
            }
        }
    }

    printf("\nSorted by Roll Number\n");
}

void sort_name(ST *ptr)
{
    ST *p1, *p2;
    int t_roll;
    float t_per;
    char t_name[20];

    for(p1 = ptr; p1; p1 = p1->next)
    {
        for(p2 = p1->next; p2; p2 = p2->next)
        {
            if(strcmp(p1->name, p2->name) > 0)
            {
                t_roll = p1->roll;
                p1->roll = p2->roll;
                p2->roll = t_roll;

                strcpy(t_name, p1->name);
                strcpy(p1->name, p2->name);
                strcpy(p2->name, t_name);

                t_per = p1->per;
                p1->per = p2->per;
                p2->per = t_per;
            }
        }
    }

    printf("\nSorted by Name\n");
}

void sort_percentage(ST *ptr)
{
    ST *p1, *p2;
    int t_roll;
    float t_per;
    char t_name[20];

    for(p1 = ptr; p1; p1 = p1->next)
    {
        for(p2 = p1->next; p2; p2 = p2->next)
        {
            if(p1->per < p2->per)   // Descending order
            {
                t_roll = p1->roll;
                p1->roll = p2->roll;
                p2->roll = t_roll;

                strcpy(t_name, p1->name);
                strcpy(p1->name, p2->name);
                strcpy(p2->name, t_name);

                t_per = p1->per;
                p1->per = p2->per;
                p2->per = t_per;
            }
        }
    }

    printf("\nSorted by Percentage\n");
}
