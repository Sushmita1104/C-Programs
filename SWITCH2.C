#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	int r,b,h,l;
	float area;
	clrscr();
	printf("\n1.Area of circle.\n2.Area of triangle.\n3.Area of rectangle.");
	printf("\n Enter your choice: ");
	scanf("%s",&ch);
	switch(ch)
	{
		case '1':
			printf("\n Enter value of radius: ");
			scanf("%d",&r);
			area=3.14*r*r;
			printf("\n Area of circle is %f",area);
		break;
		case '2':
			printf("\n Enter the values of base and height:");
			scanf("%d %d",&b,&h);
			area=0.5*b*h;
			printf("\n Area of triangle is %f",area);
		break;
		case '3':
			printf("\n Enter the values of length and breadth:");
			scanf("%d %d",&l,&b);
			area=l*b;
			printf("\n Area of rectangle is %f",area);
		break;
		default:
			printf("\n Invalid input!!");
		break;
	}
	getch();
}