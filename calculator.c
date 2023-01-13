// WAP to create simple calculator using switch case

#include<stdio.h>
int main()
{
	char op;
	float f,s;
	printf("Enter the operation to be done(+,-,*,/):");
	scanf("%c",&op);
	printf("Enter the operands:");
	scanf("%f %f",&f,&s);
	switch(op)
	{
		case '+':
			printf("%0.2f + %0.2f = %0.2f",f,s,f+s);
			break;
		case '-':
			printf("%0.2f - %0.2f = %0.2f",f,s,f-s);
			break;
		case '*':
			printf("%0.2f * %0.2f = %0.2f",f,s,f*s);
			break ;
		case '/':
			printf("%0.2f / %0.2f = %0.2f",f,s,f/s);
			break;
		default:
			printf("ERROR! enter correct eoperator :/");
	}
	return 0;
}
