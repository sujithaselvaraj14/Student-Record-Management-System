#include "studentheader.h"

void stud_del(void)
{
    char ch, ans;
    int roll;
    char name[20];

    ST *temp;
    ST *prev;

    printf("R: Delete by Roll\n");
    printf("N: Delete by Name\n");

    printf("Enter Choice: ");
    scanf(" %c", &ch);

    if(ch == 'N')
    {
        printf("Enter Name: ");
        scanf(" %[^\n]", name);

        temp = hptr;

        while(temp != NULL)
        {
            if(strcmp(temp->name, name) == 0)
            {
                printf("Roll: %d Name: %s\n",
                       temp->rollno, temp->name);
            }

            temp = temp->next;
        }

        printf("Enter Roll Number: ");
        scanf("%d", &roll);
    }

    else if(ch == 'R')
    {
        printf("Enter Roll Number: ");
        scanf("%d", &roll);
    }

    else
    {
        printf("Invalid Choice\n");
        return;
    }

    temp = hptr;
    prev = NULL;

    while(temp != NULL)
    {
        if(temp->rollno == roll)
            break;

        prev = temp;
        temp = temp->next;
    }

    if(temp == NULL)
    {
        printf("Record Not Found\n");
        return;
    }

    printf("Are you sure you want to delete? (Y/N): ");
    scanf(" %c", &ans);

    if(ans == 'Y')
    {
        if(prev == NULL)
            hptr = temp->next;
        else
            prev->next = temp->next;

        free(temp);

        printf("Record Deleted\n");
    }
}
