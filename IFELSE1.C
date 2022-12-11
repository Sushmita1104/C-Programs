#include<stdio.h>
#include<conio.h>
void main()
{
	int num;
	clrscr();
	printf("\n Enter a number: ");
	scanf("%d",&num);
	if(num%2==0)
	{
		printf("\n %d is even number",num);
	}
	else
	{
		printf("\n %d is odd number",num);
	}
	getch();
}