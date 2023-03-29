#include<stdio.h>
void main()
{
	int number;
	printf("\n Enter any number : ");
	scanf("%d",&number);
	(number>0) ? printf("\n Positive : %d",number) : 
	printf("\n Negative : %d",number);
	//printf("\n Number positive(1) or negative(0) : %d",res);
	getch();
	
}
