#include<stdio.h>
#include<conio.h>
void main()
{
	long no,r,sum=0;
	clrscr();
	printf("\n Enter a number: ");
	scanf("%ld",&no);
	ADD:
	if(no!=0)
	{
		r=no%10;
		sum=sum+r;
		no=no/10;
		goto ADD;
	}
	printf("\nSum of the digits of given number is: %ld",sum);
	getch();
}