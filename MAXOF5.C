#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d,e;
	clrscr();
	printf("\n Enter five numbers: ");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				if(a>e)
					printf("\n %d",a);
				else
					printf("\n %d",e);
			}
			else
			{
				if(d>e)
					printf("\n %d",d);
				else
					printf("\n %d",e);
			}
		}
		else
		{
			if(c>d)
			{
				if(c>e)
					printf("\n %d",c);
				else
					printf("\n %d",e);
			}
			else
			{
				if(d>e)
					printf("\n %d",d);
				else
					printf("\n %d",e);
			}
		}
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				if(b>e)
					printf("\n %d",b);
				else
					printf("\n %d",e);
			}
			else
			{
				if(d>e)
					printf("\n %d",d);
				else
					printf("\n %d",e);
			}
		}
		else
		{
			if(c>d)
			{
				if(c>e)
					printf("\n %d",c);
				else
					printf("\n %d",e);
			}
			else
			{
				if(d>e)
					printf("\n %d",d);
				else
					printf("\n %d",e);
			}
		}
	}
	getch();
}
