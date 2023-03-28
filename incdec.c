#include<stdio.h>
void main()
{
	int x=5;
	int y;
	y=x++ + ++x;
	printf("\n value of x : %d",x);//7
	printf("\n value of y : %d",y);//12
	getch();
}
