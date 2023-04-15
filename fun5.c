#include<stdio.h>
float add(float a, float b);
void main()
{
	float x,y,res;
	printf("\n Enter first Number : ");
	scanf("%f",&x);
	printf("\n Enter Second Number : ");
	scanf("%f",&y);
	res=add(x,y);
	printf("\n addition is : %f",res);
	getch();
}
float add(float a, float b)
{
	return a+b;
}
