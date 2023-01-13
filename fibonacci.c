// WAP to print fibonacci series
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a=0;
	int b=1;
	printf("%d %d ",a,b);
	int i;
	for(i=1;i<=n-2;i++)
	{
		int c=a+b;
		a=b;
		b=c;
		printf("%d ",c);
	}
	return 0;
}
