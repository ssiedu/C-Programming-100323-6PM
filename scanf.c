#include<stdio.h>
void main()
{
	int a;//variable declaration
	float b;
	char c;
	printf("Enter the value of a,b and c :");
	scanf("%d%f%s",&a,&b,&c);
	
	printf("\nvalue of a : %d",a);
	printf("\nvalue of b : %.2f",b);
	printf("\nvalue of c : %c",c);
	getch();
}
