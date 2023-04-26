#include<stdio.h>
typedef struct student
{
	int rollno;
	char name[10];
	float marks;
}stu;
void main()
{
	stu s;
	printf("\n Enter Student Roll No : ");
	scanf("%d",&s.rollno);
	printf("\n Enter Student Name : ");
	scanf("%s",&s.name);
	printf("\n Enter Student Marks : ");
	scanf("%f",&s.marks);
	
	printf("\n Student Information : \n");
	printf("\n Student Roll No : %d",s.rollno);
	printf("\n Student Name    : %s",s.name);
	printf("\n Student Marks   : %.2f",s.marks);
	getch();
}
