#include "studentheader.h"

ST *hptr = NULL;

int main()
{
    char ch;
    char choice;

    stud_load();

    while(1)
    {
        printf("\n-------- STUDENT RECORD MENU -------\n");
        printf("A/a : Add New Record\n");
        printf("D/d : Delete a Record\n");
        printf("S/s : Show the List\n");
        printf("M/m : Modify a Record\n");
        printf("V/v : Save\n");
        printf("T/t : Sort the List\n");
        printf("E/e : Exit\n");

        printf("\nEnter Your Choice: ");
        scanf(" %c", &ch);

        switch(ch)
        {
            case 'A':
            case 'a':
                stud_add();
                break;

            case 'D':
            case 'd':
                stud_del();
                break;

            case 'S':
            case 's':
                stud_show();
                break;

            case 'M':
            case 'm':
                stud_mod();
                break;

            case 'V':
            case 'v':
                stud_save();
                break;

            case 'T':
            case 't':
                stud_sort();
                break;

            case 'E':
            case 'e':

                printf("\nS/s : Save and Exit\n");
                printf("E/e : Exit Without Saving\n");

                printf("\nEnter Your Choice: ");
                scanf(" %c", &choice);

                if(choice == 'S' || choice == 's')
                {
                    stud_save();
                    return 0;
                }
                else if(choice == 'E' || choice == 'e')
                {
                    return 0;
                }
                else
                {
                    printf("Invalid Choice\n");
                }

                break;

            default:
                printf("Invalid Choice\n");
        }
    }
}
