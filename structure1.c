#include<stdio.h>
#include<string.h>
struct Employee
{
	int id;
	char name[20];
	float sal;
}e1,e2;
void main()
{
	//struct Employee e1;
	
	e1.id=101;
	strcpy(e1.name,"Ram");
	e1.sal=56789.23;
	e2.id=102;
	strcpy(e2.name,"shyam");
	e2.sal=78000.23;
	
	printf("\n Employee Id : %d",e1.id);
	printf("\n Employee Name : %s",e1.name);
	printf("\n Employee Salary : %.2f",e1.sal);
	
	printf("\n Employee Id : %d",e2.id);
	printf("\n Employee Name : %s",e2.name);
	printf("\n Employee Salary : %.2f",e2.sal);
	
	getch();
}
