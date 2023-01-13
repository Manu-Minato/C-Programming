#include<stdio.h>
int main()
{
	float a,b,c,d;
	printf("Enter first number:");
	scanf("%f",&a);
	printf("Enter second number:");
	scanf("%f",&b);
	c=a+b;
	d= a*b;
	printf("sum= %.3f\n",c);
	printf("product=%.3f",d);
	return 0;
}
