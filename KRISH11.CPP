#include<stdio.h>
#include<conio.h>
int main()
{	int j,k,add,sub,multi,div;
	
	printf("Enter first number:");
    	scanf("%d",&j);
    	printf("Enter Second number:");
    	scanf("%d",&k);
    	add=j+k;
	sub=j-k;
	multi=j*k;
	div=j/k;   //typecasting
	printf("Addition of two number is %d\n",add);
	printf("Subtraction of two number is %d\n",sub);
	printf("Multiplication of two number is %d\n",multi);
	printf("Division of two number is %d\n",div);
	return 0;
}
