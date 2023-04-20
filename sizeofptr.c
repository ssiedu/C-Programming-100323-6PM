#include<stdio.h>
void main()
{
	int *iptr;
	float *fptr;
	char *cptr;
	void *ptr;
	
	printf("\n size of int ptr : %d",sizeof(iptr));
	printf("\n size of float ptr : %d",sizeof(fptr));
	printf("\n size of character ptr : %d",sizeof(cptr));
	printf("\n size of void ptr : %d",sizeof(ptr));
	
	getch();
}
