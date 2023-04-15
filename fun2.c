#include<stdio.h>
void add();//function declaration
void main()
{
	add();//function call
	add();
	getch();
}
void add()
{
	int num1,num2,sum;
	printf("\n Enter First Number : ");
	scanf("%d",&num1);
	printf("\n Enter Second Number : ");
	scanf("%d",&num2);
	sum=num1+num2;
	printf("\n Sum is :%d",sum);
	
}
