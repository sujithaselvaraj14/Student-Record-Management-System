#include "student.h"

void stud_mod(ST *ptr)
{
    ST *temp, *found = NULL;
    int roll, new_roll, flag = 0;
    float per;
    char name[20];
    char search_ch, mod_ch;

    printf("\n========== MODIFY RECORD ==========\n");
    printf("R/r : Roll Number\n");
    printf("N/n : Name\n");
    printf("P/p : Percentage\n");
    printf("Enter Your Choice : ");
    scanf(" %c", &search_ch);

    switch(search_ch)
    {
        /* Search by Roll Number */
        case 'R':
        case 'r':

            printf("Enter Roll Number : ");
            scanf("%d", &roll);

            temp = ptr;
            while(temp)
            {
                if(temp->roll == roll)
                {
                    found = temp;
                    break;
                }
                temp = temp->next;
            }
            break;

        /* Search by Name */
        case 'N':
        case 'n':

            printf("Enter Name : ");
            scanf("%s", name);

            printf("\nMatching Records\n");
            printf("-------------------------------------------------\n");
            printf("| Roll No | Name             | Percentage |\n");
            printf("-------------------------------------------------\n");

            temp = ptr;
            while(temp)
            {
                if(strcmp(temp->name, name) == 0)
                {
                            printf("| %-7d | %-16s | %-10.2f |\n",temp->roll, temp->name, temp->per);
                    flag = 1;
                }
                temp = temp->next;
            }

            printf("-------------------------------------------------\n");

            if(flag == 0)
            {
                printf("No Matching Record Found\n");
                return;
            }

            printf("Enter Roll Number to Modify : ");
            scanf("%d", &roll);

            temp = ptr;
            while(temp)
            {
                if(temp->roll == roll)
                {
                    found = temp;
                    break;
                }
                temp = temp->next;
            }
            break;

        /* Search by Percentage */
        case 'P':
        case 'p':

            printf("Enter Percentage : ");
            scanf("%f", &per);

            printf("\nMatching Records\n");
            printf("-------------------------------------------------\n");
            printf("| Roll No | Name             | Percentage |\n");
            printf("-------------------------------------------------\n");

            temp = ptr;
            while(temp)
            {
                if(temp->per == per)
                {
                    printf("| %-7d | %-16s | %-10.2f |\n",
                            temp->roll, temp->name, temp->per);
                    flag = 1;
                }
                temp = temp->next;
            }

            printf("-------------------------------------------------\n");

            if(flag == 0)
            {
                printf("No Matching Record Found\n");
                return;
            }

            printf("Enter Roll Number to Modify : ");
            scanf("%d", &roll);

            temp = ptr;
            while(temp)
            {
                if(temp->roll == roll)
                {
                    found = temp;
                    break;
                }
                temp = temp->next;
            }
            break;

        default:
            printf("Invalid Choice\n");
            return;
    }

    if(found == NULL)
    {
        printf("Record Not Found\n");
        return;
    }

    printf("\nModify Field\n");
    printf("R/r : Roll Number\n");
    printf("N/n : Name\n");
    printf("P/p : Percentage\n");
    printf("Enter Your Choice : ");
    scanf(" %c", &mod_ch);

    switch(mod_ch)
    {
        /* Modify Roll Number */
        case 'R':
        case 'r':

            printf("Enter New Roll Number : ");
            scanf("%d", &new_roll);

            temp = ptr;
            while(temp)
            {
                if(temp->roll == new_roll && temp != found)
                {
                    printf("Roll Number Already Exists\n");
                    return;
                }
                temp = temp->next;
            }

            found->roll = new_roll;
            break;

        /* Modify Name */
        case 'N':
        case 'n':

            printf("Enter New Name : ");
            scanf("%s", found->name);
            break;

        /* Modify Percentage */
        case 'P':
        case 'p':

            printf("Enter New Percentage : ");
            scanf("%f", &found->per);
            break;

        default:
            printf("Invalid Choice\n");
            return;
    }

    printf("\nRecord Modified Successfully...\n");
}
