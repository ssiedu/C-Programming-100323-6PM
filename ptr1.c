#include<stdio.h>
void main()
{
	int number = 100;
	int *ptr ;
	ptr = &number;
	
	printf("\n number = %d ",number);
	printf("\n address of number : %p",&number);
	printf("\n ptr address of number  : %p",ptr);
	printf("\n ptr value : %d ",*ptr);
	
	getch();
}
