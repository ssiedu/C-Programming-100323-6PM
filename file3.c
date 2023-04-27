#include<stdio.h>
void main()
{
	FILE *fp;
	char ch[100];
	fp=fopen("myfile1.txt","r");
	while(fscanf(fp,"%s",ch)!=EOF)
	{
		printf("%s",ch);
	}
	fclose(fp);
	getch();
}
