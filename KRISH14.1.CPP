#include<stdio.h>
#include<conio.h>
void main()
{	int a,b,c;
	clrscr();
 	printf("Enter first value:");
 	scanf("%d",&a);
 	printf("Enter second value:");
 	scanf("%d",&b);
 	c=a;
	a=b;
	b=c;
 	printf("a= %d,b= %d",a,b);
 	getch();
}
