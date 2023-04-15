#include<stdio.h>
int fact(int n);
void main()
{
	int num,res;
	printf("\n Enter any number : ");
	scanf("%d",&num);
	res=fact(num);
	printf("\n factorial is : %d",res);
	getch();
}
int fact(int n)
{
	if (n==0)
		return 0;
	else
	return n*fact(n-1);//5*4*3*2*1
}
