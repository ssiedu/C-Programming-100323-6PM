#include<stdio.h>
void main()
{
	int i,n,s;
	printf("\n Enter limit : ");
	scanf("%d",&n);
	printf("\n Start Value : ");
	scanf("%d",&s);
	printf("\n Odd Number Series : \n");
	for(i=s;i<=n;i=i+2)
	{
		printf("\t%d",i);
	}
	getch();
}
