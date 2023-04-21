#include<stdio.h>
void main()
{
	int num=10;
	int *ptr= &num;
	printf("\n address of number : %u",ptr);
	ptr=ptr-1;
	printf("\n address of number : %u",ptr);
	getch();
	
}
