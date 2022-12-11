#include<stdio.h>
#include<conio.h>
void main()
{
	int x,i=1;
	clrscr();
	printf("\n Enter a number: ");
	scanf("%d",&x);
	printf("\n Table of %d \n",x);
	TABLE:
		if(i<=10)
		{
			printf("\n%d",x*i);
			i++;
			goto TABLE;
		}
	getch();
}