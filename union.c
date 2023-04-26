#include<stdio.h>
#include<string.h>
union data
{
	int i;
	char ch[10];
	float f;
}d;
void main()
{
	d.i=100;
	printf("\n integer value : %d",d.i);
	strcpy(d.ch,"Ram");
	printf("\n string value  : %s",d.ch);
	d.f=123.45;
	printf("\n float value   : %.2f",d.f);
	
	printf("\n size of union : %d",sizeof(d));
	
	getch();

}
