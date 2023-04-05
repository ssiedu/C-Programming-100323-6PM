#include<stdio.h>
void main()
{
	int num1,num2;
	printf("\n Enter First Number : ");
	scanf("%d",&num1);
	printf("\n Enter Second Number : ");
	scanf("%d",&num2);
	
	if(num1>num2)
		printf("%d is greater than %d",num1,num2);
	if(num2>num1)
		printf("\n %d is greater than %d",num2,num1);
	if(num1==num2)
		printf("\n %d is equal to %d",num1,num2);
		
	getch();
	
	
}
