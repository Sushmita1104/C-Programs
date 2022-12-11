#include<stdio.h>
#include<conio.h>
void main()
{
	int count=0,d,r;
	long no;
	clrscr();
	printf("\n Enter a number: ");
	scanf("%ld",&no);
	printf("\n Enter a digit: ");
	scanf("%d",&d);
	while(no!=0)
	{
		r=no%10;
		if(r==d)
			count++;
		no=no/10;
	}
	printf("\n Occurence of %d in a given number is %d times",d,count);
	getch();
}

