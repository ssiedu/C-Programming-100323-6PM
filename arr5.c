#include<stdio.h>
#define MAX 100
void main()
{
	int a[MAX];//initialization 
	int i,n; 
	printf("\n Enter size of array : ");
	scanf("%d",&n);
	printf("\n Enter Array Elements :\n");
	for (i=0;i<n;i++)
	{
		printf("\n a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++) 
		printf("\n a[%d] : %d",i,a[i]);
	 getch();
}
