#include<stdio.h>
void add(int a, int b);
void main()
{
	int x,y;
	printf("\n Enter First number : ");
	scanf("%d",&x);
	printf("\n Enter Second number : ");
	scanf("%d",&y);
	add(x,y);
	getch();
}
void add(int a, int b)
{
	int res;
	res= a+b;
	printf("\n sum is : %d",res);
}
