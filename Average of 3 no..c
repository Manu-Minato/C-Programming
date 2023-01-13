// WAP to print average of 3 numbers

#include<stdio.h>
int main()
{
	float a,b,c,d;
	printf(" Enter first number:");
	scanf("%f",&a);
	printf("Enter second number:");
	scanf("%f",&b);
	printf("Enter third number:");
	scanf("%f",&c);
	d=(a+b+c)/3;
	printf("Value of d is:%f",d);
	return 0;	
}
