#include<stdio.h>
int a=500;//global variable
void main()
{
	int a=10;//local for function
	{
		int a=100;//local for block
		printf("value of a in block : %d",a);//100
	}
	printf("\nvalue of a : %d",a);//10
	getch();
}
