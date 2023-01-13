//WAP to print given number is odd or even

#include<stdio.h>
int main()
{
	int a;
	printf("Enter any number:");
	scanf("%d",&a);
	(a%2==0) && printf("Given number %d is even",a);
	(a%2!=0) && printf("Given number %d is odd",a);     // Can also use (a%2!=0) || where || is or condition
	return 0;
}
