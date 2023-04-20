#include<stdio.h>
void main()
{
	int i;
	float f;
	char c;
	int *iptr = NULL;
	float *fptr =NULL;
	char *cptr = NULL;
	
	iptr = &i;
	i=100;
	printf("\n value of i : %d",i);//100
	printf("\n value of int ptr : %d",*iptr);//100
	
	
	fptr = &f;
	f=12.45;
	printf("\n value of f : %.2f",f);//12.45
	printf("\n value of fptr : %.2f",*fptr);//12.45
	
	cptr = &c;
	c='A';
	printf("\n value of c : %c",c);//A
	printf("\n value of cptr : %c",*cptr);//A
	
	getch();
	
}
