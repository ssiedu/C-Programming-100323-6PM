#include<stdio.h>
struct employee
{
	int id;
	char name[20];
	float sal;
}emp[4];
void main()
{
	int i;
	printf("\n Enter Information of Employee : \n");
	for(i=0;i<4;i++)
	{
		printf("\nEmployee %d : ",i+1);
		printf("\n Enter Employee Id : ");
		scanf("%d",&emp[i].id);
		printf("\n Enter Employee Name : ");
		scanf("%s",&emp[i].name);
		printf("\n Enter Employee salary : ");
		scanf("%f",&emp[i].sal);
	}
	printf("\n Employee Details :\n");
	for(i=0;i<4;i++)
	{
		printf("\n Employee Id : %d",emp[i].id);
		printf("\n Employee Name : %s",emp[i].name);
		printf("\n Employee salary : %.2f",emp[i].sal);
	}
	getch();
}
