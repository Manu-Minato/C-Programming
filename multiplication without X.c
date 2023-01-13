//WAP to find multiplication without using(*)
#include<stdio.h>
int main()
{
	int n1,n2;
	printf("Enter two numbers:");
	scanf("%d %d",&n1,&n2);
	int sum=0;
	int i;
	for(i=1;i<=n2;i++)
	{
		sum=sum+n1;
	}
	printf("%d * %d = %d",n1,n2,sum);
	return 0;
}
