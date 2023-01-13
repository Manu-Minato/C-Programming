// WAP to enter P,R,T and calculate Compound Interest

#include<stdio.h>
#include<math.h>
int main()
{
	float p,r,t,a;
	printf("Enter the Principal value:");
	scanf("%f",&p);
	printf("Enter the rate of interst:");
	scanf("%f",&r);
	printf("Enter the time period:");
	scanf("%f",&t);
	a=p*((pow((1+r/100),t)));
	printf("Compound Interest:%.3f",a);
	return 0;	
}
