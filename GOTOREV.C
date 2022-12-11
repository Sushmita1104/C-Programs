#include<stdio.h>
#include<conio.h>
void main()
{
	int no,rev=0;
	clrscr();
	printf("\n Enter a number: ");
	scanf("%d",&no);
	REVERSE:
	if(no!=0)
	{
		rev=rev*10+no%10;
		no=no/10;
		goto REVERSE;
	}
	printf("\n Reverse of a given number is %d",rev);
	getch();
}
