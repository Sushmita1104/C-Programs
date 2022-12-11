#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1;
	clrscr();
	BACK:
		if(i<=100)
		{
			printf("%d ",i);
			i++;
			goto BACK;
		}
	getch();
}
