#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,n1,n2,*ptr;
	printf("\n Enter Size of array : ");
	scanf("%d",&n1);
	ptr=(int*)malloc(n1*sizeof(int));
	printf("\n previously allocated memory:\n");
	for(i=0;i<n1;i++)
	{
		printf("\n %u",(ptr+i));
	}
	printf("\n Enter new size of array : ");
	scanf("%d",&n2);
	ptr=realloc(ptr,n2*sizeof(int));
	printf("\n Newly allocated memory : \n");
	for(i=0;i<n2;i++)
	{
		printf("\n %u",(ptr+i));
	}
	free(ptr);
	getch();
}
