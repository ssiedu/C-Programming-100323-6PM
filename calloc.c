#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,i,*ptr,sum=0;
	printf("\n Enter size of array : ");
	scanf("%d",&n);
	ptr=(int*)calloc(n,sizeof(int));
	if(ptr==NULL)
	{
		printf("\n not sufficient Memory");
		exit(0);
	}
	
	printf("\n Enter Elements of array : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",(ptr+i));
		sum=sum+ *(ptr+i);
	}
	printf("\n sum of array elements : %d",sum);
	free(ptr);
	getch();
}
