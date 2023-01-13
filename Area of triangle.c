// WAP to enter base and height of tiangle and find its area

#include<stdio.h>
int main()
{
	float a,b,c;
	printf("Enter size of the base of the triangle:");
	scanf("%f",&a);
	printf("Enter height of the triangle:");
	scanf("%f",&b);
	c=0.5*a*b;
	printf("Area of the triangle is %.2f",c);
	return 0;
}
