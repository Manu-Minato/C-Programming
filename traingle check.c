// WAP to check whether triangle is valid or not

#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter length of first side:");
	scanf("%d",&a);
	printf("Enter length of second side:");
	scanf("%d",&b);
	printf("Enter length of third side:");
	scanf("%d",&c);
	if (a>b && a>c && a<(b+c))
		printf("It's a valid triangle");
	else if (b>a && b>c && b<(a+c))
		printf("It's a valid triangle");
	else if (c>a && c>b && c<(a+b))
		printf("It's a valid triangle");
	else
		printf("It's an invalid triangle");
return 0;
}
