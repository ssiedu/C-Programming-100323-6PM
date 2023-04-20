#include<stdio.h>
void main()
{
	int i;
	float f;
	char c;
	void *ptr;
	
	ptr = &i;
	i=100;
	printf("\n value of i : %d",i);//100
	printf("\n value of int ptr : %d",*(int*)ptr);//100
	
	
	ptr = &f;
	f=12.45;
	printf("\n value of f : %.2f",f);//12.45
	printf("\n value of fptr : %.2f",*(float*)ptr);//12.45
	
	ptr = &c;
	c='A';
	printf("\n value of c : %c",c);//A
	printf("\n value of cptr : %c",*(char*)ptr);//A
	
	getch();
	
}
