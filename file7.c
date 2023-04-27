#include<stdio.h>
void main()
{
	FILE *fp;
	fp=fopen("myfile4.txt","w+");
	fputs("This is ssi",fp);
	fseek(fp,8,SEEK_SET);
	fputs("c/c++ classes",fp);
	fclose(fp);
	getch();
	
}
