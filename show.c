#include "student.h"

void stud_show(ST *ptr)
{
    if(ptr == NULL)
    {
        printf("No Records Found...\n");
        return;
    }

    printf("\n---------------------------------------\n");
    printf("RollNo\tName\t\tPercentage\n");
    printf("---------------------------------------\n");

    while(ptr)
    {
        printf("%d\t%s\t\t%.2f\n",ptr->roll,ptr->name,ptr->per);

        ptr = ptr->next;
    }

    printf("---------------------------------------\n");
}
