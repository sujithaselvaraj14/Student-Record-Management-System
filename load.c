#include "student.h"

void load_file(ST **ptr)
{
    ST *temp, *last;
    FILE *fp;

    fp = fopen("student.dat","r");

    if(fp == NULL)
        return;

    while(1)
    {
        temp = (ST *)malloc(sizeof(ST));

        if(fscanf(fp,"%d%s%f",&temp->roll,temp->name,&temp->per) != 3)
        {
            free(temp);
            break;
        }

        temp->next = NULL;

        if(*ptr == NULL)
        {
            *ptr = temp;
        }
        else
        {
            last = *ptr;

            while(last->next)
                last = last->next;

            last->next = temp;
        }
    }

    fclose(fp);

    printf("Records Loaded Successfully\n");
}
