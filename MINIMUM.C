//program to check minimum of two numbers
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("\n Enter two numbers to check minimum of them:");
	scanf("%d %d",&a,&b);
	a<b?printf("\n %d is minimum",a):printf("\n %d is minimum",b);
	getch();
}