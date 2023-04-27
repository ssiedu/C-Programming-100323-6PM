#include<stdio.h>
void main()
{
	FILE *fp;
	char ch[100];
	fp=fopen("myfile3.txt","w");
	fputs("Welcome to ssi digital",fp);
	fclose(fp);
	fp=fopen("myfile3.txt","r");
	printf("%s",fgets(ch,25,fp));
	fclose(fp);
	getch();
}

