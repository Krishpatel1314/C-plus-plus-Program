#include<stdio.h>
#include<conio.h>
void main()
{	int j,k;
	clrscr();
 	printf("Enter first value:");
 	scanf("%d",&j);
 	printf("Enter second value:");
 	scanf("%d",&k);
 	j=j+k;
	k=j-k;
	j=j-k;
	printf("First value: %d\n",j);
	printf("Second value: %d",k);
 	getch();
}
