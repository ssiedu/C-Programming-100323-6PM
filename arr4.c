#include<stdio.h>
void main()
{
	int a[5];//initialization 
	int i; 
	printf("\n Enter Array Elements :\n");
	for (i=0;i<5;i++)
	{
		printf("\n a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++) 
		printf("\n a[%d] : %d",i,a[i]);
	 getch();
}
