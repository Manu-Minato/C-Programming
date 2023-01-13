#include<stdio.h>
int main()
{
	int n;
	printf ("Enter number of elements in array:");
	scanf("%d",&n);
	int a[n];
	int i;
	for(i=0;i<n;i++)
	{
		printf("Enter element number %d for array:",i+1);
		scanf("%d",&a[i]);
	}
	int largest=a[0];
	int smallest=a[0];
	for(i=0;i<n;i++)
	{
	   if(largest<a[i])
	   largest=a[i];
	   else if(smallest>a[i])
	   smallest=a[i];	
	}
	printf("Small=%d \n Large=%d",smallest,largest);
	return 0;
}
