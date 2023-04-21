#include<stdio.h>
void product(int *a,int *b);
void main()
{
	int x,y;
	printf("\n Enter the value of x : ");
	scanf("%d",&x);
	printf("\n Enter the value of y : ");
	scanf("%d",&y);
	
	product(&x,&y);
	getch();
}

void product(int *a,int *b)
{
	int p;
	p= *a * *b;
	printf("\n product of two numbers : %d",p);
}
