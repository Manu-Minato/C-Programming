// Programme to take variabel of all data type

#include<stdio.h>
int main()
{
	int a;
	printf("Enter any integer value:");
	scanf("%d",&a);
	
	int a1 ;
	printf("Enter int value:");
	scanf("%d",&a1);           
	printf("%o",a1);          // Converts integer to octal form
	
	int a1;
	printf("Enter int value:");
	scanf("%d",&a1);
	printf("%x\n",a1);          // Convert integer to hexadecimal
	printf("%p",a1);            // Gives pointer adress    
	printf("%e",a1);            // Gives scientific notation 
	printf("%%");                // Prints % sign
		
	char b[7];
	printf("Enter any Character type value:");
	scanf("%s",&b);
	
	float c;
	printf("Enter any Decimal value:");
	scanf("%f",&c);
	
	double d;
	printf("Enter Double value:");
	scanf("%lf",d);
	
	long e;
	printf("Enter Long double value:");
	scanf("%dl",&e);
	
	short f;
	printf("Enter short value:");
	scanf("%hi",&f);
	
	long double g;
	printf("Enter long double value:");
	scanf("%Lf"&g);
		
	short int h;
	printf("Enter short int value:");
	scanf("hd",h);
	
	long int i;
	printf("Enter value for long int:");
	scanf("%ld",i);
	
	long long int j;
	printf("Enter long long int value:");
	scanf("%lld",j);
	
	printf(" Integer Value:%d \n Character Value: %s\n Float Value:%f \n",a,b,c);
	return 0;
}
