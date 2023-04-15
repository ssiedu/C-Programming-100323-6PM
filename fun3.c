#include<stdio.h>
int add();
void main()
{
	//int res;
	//res=add();
	printf("\n addition is : %d",add());
	getch();
}
int add()
{
	int num1,num2,sum;
	printf("\n Enter number 1 : ");
	scanf("%d",&num1);
	printf("\n Enter number 2 : ");
	scanf("%d",&num2);
	sum= num1+num2;
	return sum;
}
