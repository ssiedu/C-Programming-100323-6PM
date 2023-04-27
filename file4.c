#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	int id;
	char name[10];
	float sal;
	fp=fopen("Emp.txt","a");
	if(fp==NULL)
	{
		printf("\n file does not exist");
		exit(0);
	}
	printf("\n Enter Employee Id : ");
	scanf("%d",&id);
	fprintf(fp,"Id : %d\n",id);
	printf("\n Enter Employee Name : ");
	scanf("%s",&name);
	fprintf(fp,"name : %s\n",name);
	printf("\n Enter Employee salary : ");
	scanf("%f",&sal);
	fprintf(fp,"salary : %f\n",sal);
	
	fclose(fp);
	getch();
}
