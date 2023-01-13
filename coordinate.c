//WAP to accept XY coordinate and determine in which quadrant it lies

#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter the X coordinate:");
	scanf("%d",&x);
	printf("Enter Y coordinate:");
	scanf("%d",&y);
	if(x>0 && y>0)
		printf("It lies in 1st quadrant");
	else if (x<0 && y>0)
		printf("It lies in 2nd quadrant");
	else if (x<0 && y<0)
		printf("It lies in 3rd quadrant");
	else if (x>0 && y<0)
		printf("It lies in 4th quadrant");
	else if (x>0 && y==0)
		printf("It lies on +ve X axis");
	else if (x<0 && y==0)
		printf("It lies on -ve X axis");
	else if (x==0 && y>0)
		printf("It lies on +ve Y axis");
	else if (x==0 && y<0)
		printf("It lies on -ve Y axis");
	else
		printf("It lies on origin");
	return 0;
}
