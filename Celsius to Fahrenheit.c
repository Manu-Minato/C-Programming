// WAP to enter temperature in celsius and convert it to Fahrenheit

#include<stdio.h>
int main()
{
	float a,b;
	printf("Enter the Temperature in Celsius:");
	scanf("%f",&a);
	b=(a*1.8)+32;
	printf("Temperature in Fahrenheit is: %f",b);
	return 0;
}
