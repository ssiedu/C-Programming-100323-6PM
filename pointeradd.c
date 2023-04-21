#include<stdio.h>
void main()
{
	int num=10;
	int num1=20;
	int *ptr= &num;
	int *ptr1= &num1;
	printf("\n address of number : %u",ptr);
	printf("\n address of number : %u",ptr1);
	ptr=ptr - ptr1;
	printf("\n address of number : %u",ptr);
	getch();
	
}
