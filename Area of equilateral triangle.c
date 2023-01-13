// WAP to print area of equilateral triangle
#include<stdio.h>
#include<math.h>
int main()
{
	float a,b;
	printf("Enter the side lenght of the triangle:");
	scanf("%f",&a);
	b=(sqrt(3)/4)*(a*a);
	printf("Area of the triangle:%.2f",b);
	return 0;
}
