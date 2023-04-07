#include<stdio.h>
void main()
{
	int number;
	printf("\n Enter any number :");
	scanf("%d",&number);
	if(number==0)
		printf("\n Zero ");
	else if(number%2==0)
		printf("\n Even Number");
	else
		printf("\n odd Number");
	getch();
}
