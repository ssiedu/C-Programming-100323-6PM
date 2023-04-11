#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=5;i++)//1 2 3 
	{
		for(j=i;j<=5;j++)//1 2 3 4 5
		{
			printf(" * ");
		}
		printf("\n\n");
	}
	getch();
}
