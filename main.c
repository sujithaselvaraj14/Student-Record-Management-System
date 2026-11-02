#include <stdio.h>
#include <stdlib.h>
#include "student.h"

int main()
{
    ST *head = NULL;
    char ch;

    load_file(&head);

    while(1)
    {
        printf("\n	*************************************");
        printf("\n	*      STUDENT RECORD MENU          *");
        printf("\n	*************************************");
        printf("\n	*	A/a : Add New Record        *");
	printf("\n         ----------------------------------");
        printf("\n	*	D/d : Delete a Record       *");
	printf("\n         ----------------------------------");
        printf("\n	*	S/s : Show the List         *");
	printf("\n         ----------------------------------");
        printf("\n	*	M/m : Modify a Record       *");
	printf("\n         ----------------------------------");
        printf("\n	*	V/v : Save                  *");
	printf("\n          ---------------------------------");
        printf("\n	*	T/t : Sort the List         *");
	printf("\n          ---------------------------------");
        printf("\n	*	E/e : Exit                  *");
        printf("\n	*************************************");
        printf("\n\nEnter Your Choice : ");
        scanf(" %c",&ch);

        switch(ch)
        {
            case 'A':
            case 'a':
                stud_add(&head);
                break;

            case 'D':
            case 'd':
                stud_del(&head);
                break;

            case 'S':
            case 's':
                stud_show(head);
                break;

            case 'M':
            case 'm':
                stud_mod(head);
                break;

            case 'V':
            case 'v':
                save_file(head);
                break;

            case 'T':
            case 't':
                stud_sort(head);
                break;

            case 'E':
            case 'e':
            {
                char opt;

                printf("\nS/s : Save and Exit");
                printf("\nE/e : Exit Without Saving");
                printf("\nEnter Choice : ");
                scanf(" %c",&opt);

                if(opt=='S' || opt=='s')
                {
                    save_file(head);
                }

                printf("\nThank You...\n");
                exit(0);
            }

            default:
                printf("\nInvalid Choice...\n");
        }
    }

    return 0;
}
