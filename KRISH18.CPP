#include<stdio.h>
#include<conio.h>
void main()
{	int j;
	clrscr();
	printf("Enter the value:");
	scanf("%d",&j);
	printf("Preunary for increment is %d\n",++j);
	printf("Preunary for decrement is %d\n",--j);
	printf("Postunary for incrment is %d\n",j++);
	printf("Postunary for decrement is %d\n",j--);
 	getch();
}
