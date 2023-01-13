// WAP to enter marks of five subjects and calculate total,average and percentage
#include<stdio.h>
int main()
{
	float a,b,c,d,e,f,g,h;
	printf("Enter value of first subject:");
	scanf("%f",&a);
	printf("Enter value of second subject:");
	scanf("%f",&b);
	printf("Enter value of third number:");
	scanf("%f",&c);
	printf("Enter marks of forth subject:");
	scanf("%f",&d);
	printf("Enter marks of fifth subject:");
	scanf("%f",&e);
	f=a+b+c+d+e;
	printf("Total marks --> %.2f\n",f);
	g=f/5;
	printf("Average --> %.2f\n",g);
	h=(f/500)*100;  // considering marks are outof 100
	printf("Percentage obtained --> %.2f",h);
	
	return 0;
}
