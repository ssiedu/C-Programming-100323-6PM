#include<stdio.h>
void main()
{
	int a=10,b=20;
	int temp;
	printf("\n Before Swapping : ");
	printf("\n value of a : %d",a);
	printf("\n value of b : %d",b);
	temp=a;
	a=b;
	b=temp;
	printf("\n After Swapping : ");
	printf("\n value of a : %d",a);
	printf("\n value of b : %d",b);
	getch();
}
