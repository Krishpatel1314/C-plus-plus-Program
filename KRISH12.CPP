#include<stdio.h>
#include<conio.h>
void main()
{	float area,h,b;
	clrscr();
	printf("Enter height of triangle:");
	scanf("%f",&h);
	printf("Enter breadth of triangle:");
	scanf("%f",&b);
	area=0.5*h*b;
	printf("Area of triangle is %.2f",area);
 	getch();
}
