// WAP to print number of 2000,500,100 notes but make sure it has at least one 100

#include<stdio.h>
int main()
{
	int amount,m,tt,fh,oh;
	printf ("Enter the amount:");
	scanf("%d",&amount);
	m=amount-100;
	tt=m/2000;
	m=m%2000;
	fh=m/500;
	m=m%500;
	oh=m/100;
	oh=++oh;
	printf("Amount     notes\n 2000 --> %d\n 500 --> %d\n 100 --> %d",tt,fh,oh);
	return 0;
}
