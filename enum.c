#include<stdio.h>
enum week{Monday,Tuesday,Wednesday,Thursday,Friday,saturday,sunday};
void main()
{
	enum week day;
	day=Wednesday+1;
	printf("%d",day);
	getch();
}

