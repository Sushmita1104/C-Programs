#include<stdio.h>
#include<conio.h>
void main()
{
	int num;
	clrscr();
	printf("\n Enter a number to check whether it is odd or even:");
	scanf("%d",&num);
	num%2==0?printf("\n Even number"):printf("\n Odd number");
	getch();
}