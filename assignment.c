#include<stdio.h>
void main()
{
	int a=5;
	printf("\n value of a : %d",a);//5
	a+=10;//a=a+10 -> a=5+10 -> a=15
	printf("\n value of a : %d",a);//15
	a-=7;//a=a-7 -> a=15-7 -> a=8
	printf("\n value of a : %d",a);//8
	a*=2;
	printf("\n value of a : %d",a);//16
	a/=3;
	printf("\n value of a : %d",a);//5
	a%=3;
	printf("\n value of a : %d",a);//2
	getch();
}
