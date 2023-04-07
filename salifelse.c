#include<stdio.h>
void main()
{
	int sal,bonus,total_sal;
	printf("\n Enter salary : ");
	scanf("%d",&sal);
	
	if(sal>40000 && sal<=50000)
	{
		bonus    = (sal*20)/100;
		total_sal= sal+bonus;
		printf("\n %d Total bonus on your salary",bonus);
		printf("\n total salary : %d",total_sal);
	}
	else if(sal>30000 && sal<=40000)
	{
		bonus    = (sal*15)/100;
		total_sal= sal+bonus;
		printf("\n %d Total bonus on your salary",bonus);
		printf("\n total salary : %d",total_sal);
	}
	else if(sal>20000 && sal<=30000)
	{
		bonus    = (sal*10)/100;
		total_sal= sal+bonus;
		printf("\n %d Total bonus on your salary",bonus);
		printf("\n total salary : %d",total_sal);
	}
	else if(sal>10000 && sal<=20000)
	{
		bonus    = (sal*5)/100;
		total_sal= sal+bonus;
		printf("\n %d Total bonus on your salary",bonus);
		printf("\n total salary : %d",total_sal);
	}
	else if(sal<=10000)
	{
		printf("\n no bonus");
	}
	else
	{
		printf("\n Depends on ur performance");
	}
	getch();
}
