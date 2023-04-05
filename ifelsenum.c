#include<stdio.h>
void main()
{
	int number;
	printf("\n Enter any number :");
	scanf("%d",&number);
	
	if(number >=100 && number <=200)
		printf("\n number is in range");
	else
		printf("\n number is out of range");
		
		
	getch();
}
