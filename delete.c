#include "student.h"

void stud_del(ST **ptr)
{
    ST *temp, *prv;
    int num;
    char ch, name[20];
    int found;

    printf("\nR/r : Delete by Roll Number");
    printf("\nN/n : Delete by Name");
    printf("\nEnter Your Choice : ");
    scanf(" %c", &ch);

    switch(ch)
    {
        case 'R':
        case 'r':

            if(*ptr == NULL)
            {
                printf("List is Empty\n");
                return;
            }

            printf("Enter Roll Number : ");
            scanf("%d", &num);

            temp = *ptr;
            prv = NULL;

            while(temp)
            {
                if(temp->roll == num)
                    break;

                prv = temp;
                temp = temp->next;
            }
            if(temp == NULL)
         	{
    		printf("Record Not Found\n");
    		return;
		}

		printf("\nRecord to be Deleted:\n");
                    printf("Roll : %d\tName : %s\tPercentage : %.2f\n",temp->roll, temp->name, temp->per);
		if(temp == *ptr)
    			*ptr = temp->next;
		else
    			prv->next = temp->next;

		free(temp);

		printf("\nRecord Deleted Successfully\n"); 
                break;

        case 'N':
        case 'n':

            if(*ptr == NULL)
            {
                printf("List is Empty\n");
                return;
            }

            printf("Enter Name : ");
            scanf("%s", name);

            temp = *ptr;
            found = 0;

            while(temp)
            {
                if(strcmp(temp->name, name) == 0)
                {
                    printf("Roll : %d\tName : %s\tPercentage : %.2f\n",temp->roll, temp->name, temp->per);
                    found = 1;
                }

                temp = temp->next;
            }

            if(found == 0)
            {
                printf("Name Not Found\n");
                return;
            }

            printf("Enter Roll Number to Delete : ");
            scanf("%d", &num);

            temp = *ptr;
            prv = NULL;

            while(temp)
            {
                if(temp->roll == num && strcmp(temp->name, name) == 0)
                    break;

                prv = temp;
                temp = temp->next;
            }

            if(temp == NULL)
            {
                printf("Record Not Found\n");
                return;
            }

            if(temp == *ptr)
                *ptr = temp->next;
            else
                prv->next = temp->next;

            free(temp);

            printf("Record Deleted Successfully\n");
            break;

        default:
            printf("Invalid Choice\n");
    }
}
