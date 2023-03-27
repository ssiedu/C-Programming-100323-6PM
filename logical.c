#include<stdio.h>
void main()
{
	int a=100,b=200;
	printf("And : %d",(a>b && a==100));//0
	printf("\n And : %d",(a<b && a!=b));//0//1
	printf("\n Or : %d",(a==b || b>a));//1
	printf("\n Or : %d",(a!=b || b==0));//1
	printf("\n Not : %d",!(a>b));//1
	printf("\n AND NOT OR : %d",(!(a>b))&&(a!=b || a==b));//1
	getch();
}
