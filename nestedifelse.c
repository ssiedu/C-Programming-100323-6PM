#include<stdio.h>
void main()
{
	int num1,num2;
	printf("\n Enter first number :");
	scanf("%d",&num1);
	printf("\n Enter second number :");
	scanf("%d",&num2);
	
	if(num1!=num2)
	{
		if(num1>num2)
			printf("\n Num1 is greater than num2");
		else	
			printf("\n num2 is greater than num1");
	}
	else
	{
		printf("\n numbers are equal");
	}
}
