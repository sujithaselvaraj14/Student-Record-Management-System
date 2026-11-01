#include "studentheader.h"

void stud_exit(void)
{
    char choice;

    printf("\nS/s : Save and Exit\n");
    printf("E/e : Exit Without Saving\n");

    printf("\nEnter Your Choice: ");
    scanf(" %c", &choice);

    if(choice == 'S' || choice == 's')
    {
        stud_save();
        exit(0);
    }

    else if(choice == 'E' || choice == 'e')
    {
        exit(0);
    }

    else
    {
        printf("Invalid Choice\n");
    }
}
