#include<stdio.h>
void main()
{
	char ch;
	printf("\n Enter any character : ");
	scanf("%c",&ch);
	if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
		printf("%c is character ",ch);
	else
		printf("%c is not Character ",ch);
		
	getch();
}
