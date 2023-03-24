#include<stdio.h>
# define pi 3.14
void main()
{
	float r,area;
	printf("Enter radius of circle :");
	scanf("%f",&r);
	area=pi*r*r;
	printf("Area of circle : %.2f",area);
	getch();
	

}
