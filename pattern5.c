#include<stdio.h>
void main()
{
	int i,j;
	for(i=65;i<=69;i++)//row 1 2 3 4 5 6
	{
		for(j=65;j<=69;j++)//column 1 2 3 4 5  6
		{
			printf(" %c ",i);
		}
		printf("\n\n");
	}
	getch();
}
