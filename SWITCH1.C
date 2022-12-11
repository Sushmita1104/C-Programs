#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	int a,b,c;
	clrscr();
	printf("\n Enter three numbers: ");
	scanf("%d %d %d",&a,&b,&c);
	printf("\nA.Maximum no.\nB.Minimum no.\nC.Second maximum no.");
	printf("\n Enter your choice: ");
	scanf("%s",&ch);
	switch(ch)
	{
		case 'A':
		case 'a':
		if(a>b)
		{
			if(a>c)
				printf("%d",a);
			else
				printf("%d",c);
		}
		else
		{
			if(b>c)
				printf("%d",b);
			else
				printf("%d",c);
		}
		break;
		case 'B':
		case 'b':
		if(a<b)
		{
			if(a<c)
				printf("%d",a);
			else
				printf("%d",c);
		}
		else
		{
			if(b<c)
				printf("%d",b);
			else
				printf("%d",c);
		}
		break;
		case 'C':
		case 'c':
		if(a<b)
		{
			if(c<a)
				printf("%d",a);
			else if(c<b)
				printf("%d",c);
			else
				printf("%d",b);
		}
		else
		{
			if(c<b)
				printf("%d",b);
			else if(c<a)
				printf("%d",c);
			else
				printf("%d",a);
		}
		break;
		default:
			printf("\n Invalid input!!");
		break;
	}
	getch();
}