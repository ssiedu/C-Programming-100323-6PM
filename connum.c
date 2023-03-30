
#include<stdio.h>
void main()
//hello
{
	int num;
	printf("\n Enter any number : ");
	scanf("%d",&num);
	/*check number in 
	between 100 and 200*/
	
	(num>=100 && num<=200)? printf("In Range"):printf("Out of range");
     getch();
}
