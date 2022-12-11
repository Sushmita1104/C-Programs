#include<stdio.h>
#include<conio.h>
void main()
{
	int no;
	long fact=1;
	clrscr();
	printf("\n Enter a number: ");
	scanf("%d",&no);
	while(no>1)
	{
		fact=fact*no;
		no--;
	}
	printf("\n Factorial is %ld",fact);
	getch();
}
