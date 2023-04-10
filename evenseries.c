#include<stdio.h>
void main()
{
	int n,i;
	printf("\n Enter Limit : ");
	scanf("%d",&n);
	printf("\n Odd Series : \n");
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
			printf("\t%d",i);
	}
	printf("\n Even Series : \n");
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
			printf("\t%d",i);
	}
	getch();
}
