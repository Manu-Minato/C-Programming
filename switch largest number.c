// WAP TO FIND LARGEST NUMBER USING SWITCH 

#include<stdio.h>
int main()
{
	int num1,num2;
	printf("Enter the first number:");
	scanf("%d",&num1);
	printf("Enter the second number:");
	scanf("%d",&num2);
	switch(num1>num2)
	{
		case 0:
			printf("%d is larger than %d",num2,num1);
			break;
		case 1:
			printf("%d is larger than %d",num1,num2);
			break;
		default:
			printf("BOTH ARE EQUAL");
			break;
	}
	return 0;
}
