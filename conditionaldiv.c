#include<stdio.h>
void main()
{
	int num;
	printf("\n Enter any number : ");
	scanf("%d",&num);
	(num%5==0 && num%7==0) ? printf("\n Divisible by both"):
		printf("\n Not Divisible by both");
	getch();
		
}
