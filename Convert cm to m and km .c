// WAP to enter length in centimeter and convert it into meter and kilometer

#include<stdio.h>
int main()
{
	float a,b,c;
	printf("Enter length in cm:");
	scanf("%f",&a);
	b=a/100;
	printf("Length in meter is: %f \n",b);
	c=b/1000;
	printf("Length in kilometer is: %f",c);
	return 0;
}
