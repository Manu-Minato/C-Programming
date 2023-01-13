// WAP to find leap year in a given range
#include<stdio.h>
int main()
{
	int i,s,e;
	printf("Enter starting year:");
	scanf("%d",&s);
	printf("Enter ending year:");
	scanf("%d",&e);
	printf("Leap year b/w %d and %d are: ",s,e);
	for(i=s;i<=e;i++)
	{
		if(i%400==0 && i%4==0)
		printf("%d",i);
	}
	return 0;

}
