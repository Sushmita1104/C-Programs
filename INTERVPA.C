#include<stdio.h>
#include<conio.h>
void main(){
	int i,j,n;
	clrscr();
	printf("\n Enter no of lines:");
	scanf("%d",&n);
	for(i=n;i>=0;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
			printf("\t");
		}
		printf("\n");
	}
	getch();
}