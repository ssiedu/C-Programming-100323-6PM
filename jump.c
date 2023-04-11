#include<stdio.h>
void main()
{
	int i;
	for(i=1;i<=10;i++)
	{
		if(i==5)
		{
			goto xyz;//continue;//break;
		}
		printf("\t%d",i);
	}
	xyz:
		printf("\n We Use Goto Statement");
	getch();
}
