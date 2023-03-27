#include<stdio.h>
void main()
{
	int a,b;
	printf("\n Enter First Number : ");
	scanf("%d",&a);
	printf("\n Enter Second Number : ");
	scanf("%d",&b);
	printf("\nGreater than          : %d",a>b);//1
	printf("\nLess Than             : %d",a<b);//0
	printf("\nGreater than equal to : %d",a>=b);//1
	printf("\n Less than equal to   : %d",a<=b);//0
	printf("\n Equal to     	    : %d",a==b);//0
	printf("\n Not equal to         : %d",a!=b);//1
	getch();
}
