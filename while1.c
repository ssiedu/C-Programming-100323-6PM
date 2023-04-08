#include<stdio.h>
void main()
{
int i,n,s;
	printf("\n Enter Start number : ");
	scanf("%d",&s);
	printf("\n Enter End number : ");
	scanf("%d",&n);
	i=s;
	while(i<=n)
	{
		//printf("\n Hello");
		printf("\t%d",i);
		i++;
	}
	getch();
}
