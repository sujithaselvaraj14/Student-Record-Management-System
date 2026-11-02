#include "student.h"

void stud_add(ST **ptr)
{
    ST *temp, *p;
    int roll = 1;

    temp = (ST *)malloc(sizeof(ST));

    while(1)
    {
        p = *ptr;

        while(p)
        {
            if(p->roll == roll)
                break;

            p = p->next;
        }

        if(p == NULL)
            break;

        roll++;
    }

    temp->roll = roll;

    printf("Enter Name : ");
    scanf("%s", temp->name);

    printf("Enter Percentage : ");
    scanf("%f", &temp->per);

    temp->next = *ptr;
    *ptr = temp;
}
