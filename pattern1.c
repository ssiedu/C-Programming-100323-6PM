#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=5;i++)//row 1 2 3 4 5 6
	{
		for(j=1;j<=5;j++)//column 1 2 3 4 5 6
		{
			printf(" * ");
		}
		printf("\n\n");
	}
	getch();
}
