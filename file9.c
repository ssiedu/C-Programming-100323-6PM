#include<stdio.h>
void main()
{
	FILE *fp;
	int len;
	fp=fopen("myfile3.txt","r");
	fseek(fp,0,SEEK_END);
	len=ftell(fp);
	printf("\n sizre of file : %d",len);
	fclose(fp);
	getch();
}
