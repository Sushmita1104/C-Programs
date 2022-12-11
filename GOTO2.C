#include<stdio.h>
#include<conio.h>
void main()
{
	int no,i=1;
	clrscr();
	printf("\n Enter a number: ");
	scanf("%d",&no);
	Table:
		if(i<=10)
		{
			printf("\n %d",no*i);
			i++;
			goto Table;
		}
	getch();
}