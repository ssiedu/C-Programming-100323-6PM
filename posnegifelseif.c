#include<stdio.h>
void main()
{
	int number;
	printf("\n Enter any Number : ");
	scanf("%d",&number);
	if(number==0)
		printf("\n Zero");
	else if(number>0)
		printf("\n Positive Number");
	else
		printf("\n Negative Number");
		
	getch();
}
