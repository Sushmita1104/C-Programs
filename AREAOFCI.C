#include<stdio.h>
#include<conio.h>
void main() {
	int r;
	float a;
	clrscr();
	printf("\n Enter the radius: ");
	scanf("%d",&r);
	a=3.14*r*r;
	printf("\n The area of circle is:%f",a);
	getch();
}