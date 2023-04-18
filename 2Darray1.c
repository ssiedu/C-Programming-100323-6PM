#include<stdio.h>
void main()
{
	int a[2][2];
	a[0][0]=10;
	a[0][1] = 20;
	a[1][0] = 30;
	a[1][1] = 40;
	
	printf("\n a[0][0] : %d",a[0][0]);
	printf("\n a[0][1] : %d",a[0][1]);
	printf("\n a[1][0] : %d",a[1][0]);
	printf("\n a[1][1] : %d",a[1][1]);
	
	getch();

}
