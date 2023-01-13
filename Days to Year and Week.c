// WAP to convert days into years,weeks and days

#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter the number of days:");
	scanf("%d",&a);
	b=a / 365;
	c=(a % 365) / 7;
	d=(a % 365 ) % 7;
	printf("%d is equivalent to %d years, %d weeks and %d days",a,b,c,d);
	return 0;
}
