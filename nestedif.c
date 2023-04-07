#include<stdio.h>
void main()
{
	int number;
	printf("\n Enter any number : ");
	scanf("%d",&number);//101
	if(number>0)
	{
		printf("\n Positive Number ");
		if(number%2==0)
			printf("\n Even Number");
		else
			printf("\n Odd Number ");
	}
	else
	{
		printf("\n Negative Number");
	}
	getch();
}
