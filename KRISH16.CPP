#include<stdio.h>
#include<conio.h>
void main()
{	float j,k,l,m,n;
	clrscr();
	printf("Enter the Kilometer:");
	scanf("%f",&j);
	k=1000*j;
	l=100000*j;
	m=3280.84*j;
	n=39370*j;
	printf("Meter is %f\n",k);
	printf("Feet is %f\n",m);
	printf("Centimeter is %f\n",l);
	printf("Inch is %f\n",n);
 	getch();
}
