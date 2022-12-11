//program to check maximum of three numbers
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,max;
	clrscr();
	printf("\n Enter three numbers to check maximum of them:");
	scanf("%d %d %d",&a,&b,&c);
	max=a>b?(a>c?a:c):(b>c?b:c);
	printf("\n Maximum number is:%d",max);
	getch();
}