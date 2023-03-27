#include<stdio.h>
void main()
{
	int num1,num2;
	printf("\n Enter First Number : ");
	scanf("%d",&num1);
	printf("\n Enter Second Number : ");
	scanf("%d",&num2);
	printf("\n Addition : %d",num1+num2);
	printf("\n Subtraction : %d",num1-num2);
	printf("\n Multiplication : %d",num1*num2);
	printf("\n Division : %.1f",num1/(float)num2);
	printf("\n Modulus : %d",num1%num2);
	getch();
}
