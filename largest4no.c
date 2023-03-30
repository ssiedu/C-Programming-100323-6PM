#include<stdio.h>
void main()
{
	int a,b,c,d,res;
	printf("\n Enter a : ");
	scanf("%d",&a);
	printf("\n Enter b : ");
	scanf("%d",&b);
	printf("\n Enter c : ");
	scanf("%d",&c);
	printf("\n Enter d : ");
	scanf("%d",&d);
	
	//res= (a>b && a>c && a>d) ? a : (b>c && b>d) ? b : (c>d) ? c:d;
	
	res=(a>b)?(a>c)?(a>d)?a:d:c:(b>c)?(b>d)?b:d:(c>d)?c:d;
	
	printf("\n Largest Number : %d",res);
	getch();
		
}
