// WAP to check whether it is alphabet,digit or special character 

#include<stdio.h>
int main()
{
	char input;
	printf("Enter your Input:");
	scanf("%c",&input);
	if((input>='a' && input<='z') || (input>='A' && input<='Z'))
		printf("Input is Character");
	else if (input>='0' && input<= '9')
		printf("Input is Numeral");
	else 
		printf("Input is Special Character");
return 0;
}

