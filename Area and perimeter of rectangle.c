// WAP to enter lenght and breath of rectangle and find their area and perimeter

#include<stdio.h>
int main()
{
	float a,b,c,d;
	printf("Enter Length of rectangle:");
	scanf("%f",&a);
	printf("Enter Breath of rectangle:");
	scanf("%f",&b);
	c=a*b;
	printf("Area of rectangle is: %f \n",c);
	d=(a+b)*2;
	printf("Perimeter of rectangle is: %f",d);
	return 0;
}
