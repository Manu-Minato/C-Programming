//#WAP to enter n number of array and display it in reverse order

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
	int low=0,high=n-1;
	for(i=0;i<n/2;i++)
	{
		int temp=a[low];
		a[low]=a[high];
		a[high]=temp;
		low++;
		high--;
	}
	for(i=0;i<n;i++)
	printf ("%d , ",a[i]);
	return 0;
}
