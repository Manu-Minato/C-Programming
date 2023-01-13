// WAP to swap value of two variable using third variable

#include<stdio.h>
int main()
{
	int a,b,c;
	a=21,b=64;
	printf("Before swap\n a=%d     b=%d\n",a,b);
	c=a;
	a=b;
	b=c;
	printf("After swap\n a=%d     b=%d",a,b);
	return 0;
}
