// WAP to perform working of an ATM machine in which the user enters an amount and we have to print note of 2000,500,100 reespctively

#include<stdio.h>
int main()
{
	int m,tt,fh,oh;
	printf("Enter the amount in multiple of 100:");
	scanf("%d",&m);
	tt=m/2000;
	m=m%2000;
	fh=m/500;
	m=m%500;
	oh=m/100;
	printf("Amount     notes\n 2000 --> %d\n 500  --> %d\n 100  --> %d",tt,fh,oh);
	return 0;
}
