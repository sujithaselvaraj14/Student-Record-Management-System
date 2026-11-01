#include"studentheader.h"
void stud_save(void)
{
	FILE*fp;
	ST*temp;
	fp=fopen("student.csv","w");
	if(fp==NULL)
	{
		printf("file open failed\n");
		return;
	}
	
	for(temp=hptr;temp!=NULL;temp=temp->next)
	{
		fprintf(fp,"%d %s %.2f\n",temp->rollno,temp->name,temp->percentage);
	}
	fclose(fp);
	printf("records saved successfully");
}
void stud_load (void)
{

        FILE*fp;
        ST*temp;
	ST*last;
	int roll;
	char name[20];
	float percentage;
        fp=fopen("student.csv","r");
        if(fp==NULL)
        {
                printf("file open failed\n");
                return;
        }
        last=NULL;
	while(fscanf(fp,"%d%s%f",&roll,name,&percentage)==3)
	{
		temp=malloc(sizeof(ST));
		strcpy(temp->name,name);
		temp->percentage=percentage;
		temp->next=NULL;
		if(hptr==NULL)
		{
			hptr=temp;
			last=temp;
		}
		else
		{
			last->next=temp;
			last=temp;
		}
	}
	fclose(fp);

}
