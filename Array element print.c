//#WAP to enter n number of array and display it

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
	for(i=0;i<n;i++)
	printf ("%d , ",a[i]);
	return 0;
}
