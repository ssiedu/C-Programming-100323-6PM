//call by value
#include<stdio.h>
void swap(int *a, int *b);
void main()
{
	int x,y;
	printf("\n Enter the value of x : ");
	scanf("%d",&x);
	printf("\n Enter the value of y : ");
	scanf("%d",&y);
	printf("\n Before function call value of x and y :\n");
	printf("\n value of x : %d",x);
	printf("\n value of y : %d",y);
	swap(&x,&y);//call by address
	printf("\n After function call value of x and y :\n");
	printf("\n value of x : %d",x);
	printf("\n value of y : %d",y);
	getch();
}
void swap(int *a, int *b)
{
	int temp;
	printf("\n Before Swap :\n");
	printf("\n value of a : %d",*a);
	printf("\n value of b : %d",*b);
	temp=*a;
	*a=*b;
	*b=temp;
	printf("\n After Swap :\n");
	printf("\n value of a : %d",*a);
	printf("\n value of b : %d",*b);
}
