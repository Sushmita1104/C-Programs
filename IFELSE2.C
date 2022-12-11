#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("\n Enter three numbers: ");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			if(b>c)
				printf("\n %d",b);
			else
				printf("\n %d",c);
		}
		else
		{
			printf("\n %d",a);
		}
	}
	else
	{
		if(b>c)
		{
			if(a>c)
				printf("\n %d",a);
			else
				printf("\n %d",c);
		}
		else
			printf("\n %d",b);
	}
	getch();
}