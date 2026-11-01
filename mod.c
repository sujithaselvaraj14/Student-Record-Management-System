#include "studentheader.h"
void stud_mod(void)
{
    ST *temp;
    char ch, choice;
    char name[30];
    int roll, found;
    float percentage;

    printf("R/r : Search by Roll\n");
    printf("N/n : Search by Name\n");
    printf("P/p : Search by Percentage\n");

    printf("Enter Choice: ");
    scanf(" %c", &ch);

    /* Search by Roll */
    if(ch == 'R' || ch == 'r')
    {
        printf("Enter Roll: ");
        scanf("%d", &roll);
    }

    /* Search by Name */
    else if(ch == 'N' || ch == 'n')
    {
        printf("Enter Name: ");
        scanf(" %[^\n]", name);

        found = 0;

        for(temp = hptr; temp != NULL; temp = temp->next)
        {
            if(strcmp(temp->name, name) == 0)
            {
                printf("Roll: %d  Name: %s  Percentage: %.2f\n",
                       temp->rollno,
                       temp->name,
                       temp->percentage);

                found = 1;
            }
        }

        if(found == 0)
        {
            printf("Record Not Found\n");
            return;
        }

        printf("Enter Roll to Modify: ");
        scanf("%d", &roll);
    }

    /* Search by Percentage */
    else if(ch == 'P' || ch == 'p')
    {
        printf("Enter Percentage: ");
        scanf("%f", &percentage);

        found = 0;

        for(temp = hptr; temp != NULL; temp = temp->next)
        {
            if(temp->percentage == percentage)
            {
                printf("Roll: %d  Name: %s  Percentage: %.2f\n",
                       temp->rollno,
                       temp->name,
                       temp->percentage);

                found = 1;
            }
        }

        if(found == 0)
        {
            printf("Record Not Found\n");
            return;
        }

        printf("Enter Roll to Modify: ");
        scanf("%d", &roll);
    }

    else
    {
        printf("Invalid Choice\n");
        return;
    }

    /* Find selected roll */
    found = 0;

    for(temp = hptr; temp != NULL; temp = temp->next)
    {
        if(temp->rollno == roll)
        {
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Record Not Found\n");
        return;
    }

    /* Modify Field */
    printf("\nN/n : Name\n");
    printf("P/p : Percentage\n");

    printf("Enter Your Choice: ");
    scanf(" %c", &choice);

    if(choice == 'N' || choice == 'n')
    {
        printf("Enter New Name: ");
        scanf(" %[^\n]", temp->name);
    }

    else if(choice == 'P' || choice == 'p')
    {
        printf("Enter New Percentage: ");
        scanf("%f", &temp->percentage);
    }

    else
    {
        printf("Invalid Choice\n");
        return;
    }

    printf("Record Modified Successfully\n");
}
