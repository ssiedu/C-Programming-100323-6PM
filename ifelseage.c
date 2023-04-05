#include<stdio.h>
void main()
{
	int age;
	printf("\n Enter age of person : ");
	scanf("%d",&age);
	if(age>=18)
		printf("\n person is eligible for vote");
	else
	    printf("\n Person is not eligible for vote");
	  
	printf("\n Thank you for vote");  
	getch();
}
