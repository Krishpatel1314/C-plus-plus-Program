#include<stdio.h>
#include<conio.h>
void main()
{	float p,r,n,i;
	clrscr();
	printf("Enter Principal amount:");
 	scanf("%f",&p);
 	printf("Enter Rate of interest:");
 	scanf("%f",&r);
	printf("Enter no.of Years:");
	scanf("%f",&n);
 	i=(p*r*n)/100;
 	printf("Simple interest is %.2f",i);
 	getch();
}
