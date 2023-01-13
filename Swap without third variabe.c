// WAP to swap value of two variable without using third variable

#include<stdio.h>
int main()
{
	int a,b;
	a=1,b=4;
	printf("Before swap\n a=%d     b=%d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swap\n a=%d     b=%d",a,b);
	return 0;
}
