#include<stdio.h>
void main()
{
	FILE *fp;
	char ch;
	fp=fopen("myfile2.txt","w");
	fputc('Z',fp);
	fclose(fp);
	fp=fopen("myfile2.txt","r");
	while((ch=fgetc(fp))!=EOF)
	{
		printf("\n %c",ch);
	}
	fclose(fp);
	getch();
}
