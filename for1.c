#include<stdio.h>
void main()
{
	int i,n,s;
	printf("\n Enter Start number : ");
	scanf("%d",&s);
	printf("\n Enter End number : ");
	scanf("%d",&n);
	for(i=s;i<=n;i++)
	{
		printf("\t%d",i);
	}
	getch();
}
