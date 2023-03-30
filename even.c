#include<stdio.h>
void main()
{
	int number;
	printf("\n Enter any number : ");
	scanf("%d",&number);
	(number%2==0)? printf("Even"):printf("Odd");
	getch();
}
