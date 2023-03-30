#include<stdio.h>
void main()
{
	int year;
	printf("\n Enter any year : ");
	scanf("%d",&year);
	(year%4==0)? printf("Leap year"):printf("Not Leap year");
	getch();
}
