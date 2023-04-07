#include<stdio.h>
void main()
{
	int year;
	printf("\n Enter Year : ");
	scanf("%d",&year);
	if(year%4==0)
		printf("\n Leap Year");
	else
		printf("\n Not leap year");
		
	getch();
}
