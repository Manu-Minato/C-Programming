// WAP to perform all arithematic operations

#include<stdio.h>
int main()
{
	float a,b,c,d,e,f,h,i,j,k;
	printf("Enter first number:");
	scanf("%f",&a);
	printf("Enter second number:");
	scanf("%f",&b);
	c=a+b;
	printf("Sum of these two is: %f \n",c);
	d=a-b;
	printf("Difference of these two numbers are: %f \n",d);
	e=a*b;
	printf("Product of these numbers are: %f \n",e);
	f=a/b;
	printf("Divisor these two numbers is: %f \n",f);
	h=a++;
	i=b++;
	printf("Number next to a is: %f \n Number next to b is: %f \n",h,i);
	j=a--;
	k=b--;
	printf("Number before a is: %f \n Number before b is: %f \n",j,k);
	return 0;
}
