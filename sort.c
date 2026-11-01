#include"studentheader.h"

void stud_sort(void)
{
    ST *temp;
    ST *ptr;
    ST swap;
    char choice;

    if(hptr == NULL)
    {
        printf("No Records Available\n");
        return;
    }

    printf("N/n : Sort by Name\n");
    printf("P/p : Sort by Percentage\n");

    printf("Enter Your Choice: ");
    scanf(" %c", &choice);

    for(temp = hptr; temp != NULL; temp = temp->next)
    {
        for(ptr = temp->next; ptr != NULL; ptr = ptr->next)
        {
            if((choice == 'N' || choice == 'n') &&
               strcmp(temp->name, ptr->name) > 0)
            {
                swap.rollno = temp->rollno;
                strcpy(swap.name, temp->name);
                swap.percentage = temp->percentage;

                temp->rollno = ptr->rollno;
                strcpy(temp->name, ptr->name);
                temp->percentage = ptr->percentage;

                ptr->rollno = swap.rollno;
                strcpy(ptr->name, swap.name);
                ptr->percentage = swap.percentage;
            }

            else if((choice == 'P' || choice == 'p') &&
                    temp->percentage > ptr->percentage)
            {
                swap.rollno = temp->rollno;
                strcpy(swap.name, temp->name);
                swap.percentage = temp->percentage;

                temp->rollno = ptr->rollno;
                strcpy(temp->name, ptr->name);
                temp->percentage = ptr->percentage;

                ptr->rollno = swap.rollno;
                strcpy(ptr->name, swap.name);
                ptr->percentage = swap.percentage;
            }
        }
    }

    if(choice == 'N' || choice == 'n' ||
       choice == 'P' || choice == 'p')
        printf("Records Sorted Successfully\n");
    else
        printf("Invalid Choice\n");
}
