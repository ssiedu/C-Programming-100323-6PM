#include<stdio.h>
void main()
{
	int num=10;
	int *ptr1=&num;
	int **pptr = &ptr1;
	int ***ppptr = &pptr;
	
	printf("address num : %u",&num);
	
	printf("\n value ptr1 : %u",ptr1);
	printf("\n value of num : %d",*ptr1);
	
	printf("\n address of ptr1 : %u",&ptr1);
	printf("\n value of pptr : %u",pptr);
	printf("\n value of ptr1 : %d",**pptr);
	
	
		printf("\n address of pptr : %u",&pptr);
	printf("\n value of ppptr : %u",ppptr);
	printf("\n value of num : %d",***ppptr);
	getch();
}
