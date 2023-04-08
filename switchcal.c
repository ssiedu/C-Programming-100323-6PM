#include<stdio.h>
void main()
{
	int fnum,snum,ch;
	
	printf("\n Select Any One Option : ");
	printf("\n1.Addition \n2.Subtraction \n3.Multiplication \n4.Division");
	printf("\n Enter Your Choice : ");
	scanf("%d",&ch);
	printf("\n Enter First Number : ");
	scanf("%d",&fnum);
	printf("\n Enter Second Number : ");
	scanf("%d",&snum);
	
	switch(ch)
	{
		case 1:
			printf("\n %d + %d : %d",fnum,snum,fnum+snum);
			break;
		case 2:
			printf("\n %d - %d  : %d",fnum,snum,fnum-snum);
			break;
		case 3:
			printf("\n %d * %d  : %d",fnum,snum,fnum*snum);
			break;
		case 4:
			printf("\n %d / %d : %d",fnum,snum,fnum/snum);
			break;
		default:
			printf("Invalid choice");
			break;
	}

	getch();
	
}
