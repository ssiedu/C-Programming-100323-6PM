#include<stdio.h>
void main()
{
	int a[20],i,n;
	printf("\n Enter size of array :");
	scanf("%d",&n);
	printf("\n Enter Elements of array : \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[0] < a[i])
		{
			a[0]=a[i];
		}
	}
	printf("\n largest Element : %d",a[0]);
	getch();
}
