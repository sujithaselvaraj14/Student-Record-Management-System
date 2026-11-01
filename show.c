#include "studentheader.h"

void stud_show(void)
{
    ST *temp;

    if(hptr == NULL)
    {
        printf("No Records Available\n");
        return;
    }
    printf("_____________________________________\n");
    printf("\nRoll No\t  Name\t\t Percentage\n");
    printf("______________________________________\n");

    temp = hptr;

    while(temp != NULL)
    {
        printf("%d\t%s\t\t%.2f\n",
               temp->rollno,
               temp->name,
               temp->percentage);

        temp = temp->next;
    }
}
