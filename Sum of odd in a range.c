// WAP to print sum of all odd numbers in a given range
#include<stdio.h>
int main()
{
	int s,e;
	printf("Enter starting value:");
	scanf("%d",&s);
	printf("Enter end point:");
	scanf("%d",&e);
	int sum=0;
	int i;
	for(i=s;i<=e;i++)
	{
		if(i%2!=0)
		sum=sum+i;
	}
	printf("Sum of odd terms=%d",sum);
	return 0;
}
