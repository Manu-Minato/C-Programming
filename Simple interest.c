// WAP to enter P,R,T and calculate Simple Interest

#include<stdio.h>
int main()
{
	float p,r,t,a;
	printf("Enter the Principal value:");
	scanf("%f",&p);
	printf("Enter the rate of interst:");
	scanf("%f",&r);
	printf("Enter the time period:");
	scanf("%f",&t);
	a=(p*r*t)/100;
	printf("Simple Interest:%.3f",a);
	return 0;	
}
