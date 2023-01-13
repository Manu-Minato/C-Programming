// WAP to enter radius of circle and find its diameter, circumference and area

#include<stdio.h>
#define PI 3.146
int main()
{
	float r,d,a,c;
	printf("Enter radius of circle:");
	scanf("%f",&r);
	d=r*2;
	printf("Diameter of circle= %f",d);
	a=PI*(r*r);
	printf("Area of circle: %f",a);
	c=2*PI*r;
	printf("Circumference of circle: %f",c);
	return 0;
}
