//WAP to enter two angles of triangle and find the third angle

#include<stdio.h>
int main()
{
	float a,b,c;
	printf("Enter the value of first angle:");
	scanf("%f",&a);
	printf("Enter value of second angle:");
	scanf("%f",&b);
	c=180-(a+b);
	printf("All the angles of triangle are:\n First  --> %.2f\n Second --> %.2f\n Third  --> %.2f",a,b,c);
	return 0;
}
