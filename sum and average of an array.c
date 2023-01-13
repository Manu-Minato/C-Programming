// WAP to find sum and average of an array

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
	int s=0;
	for(i=0;i<n;i++)
    s=s+a[i];
    int avg=s/n;
    printf(" Sum=%d",s);
    printf("\n Average=%d",avg);
    return 0;
}
