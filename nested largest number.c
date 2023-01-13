// WAP to find largest number amongst the three given number

#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the first number:");
	scanf("%d",&a);
	printf("Enter the second number:");
	scanf("%d",&b);
	printf("Enter the third number:");
	scanf("%d",&c);
	if (a>=b)
		{
			if (a>=c)
			printf("Largest number is %d",a);
			else 
			printf("Largest number is %d",c);
		}
	else
		{
			if (b>=c)
			printf("Largest number is %d",b);
			else
			printf("Largest number is %d",c);			  		
		}
return 0;
}
