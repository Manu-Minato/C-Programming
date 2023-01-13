#include<stdio.h>
int main()
{
	int a=2,b=3,c=5,x,y;
	x=(a++)+(b--)+(c--)*(a++)-(c++)*a;
	printf("Value of a=%d\n b=%d\n c=%d\n Value of x is %d",a,b,c,x);
	y=(++b)+(--a)+(--c)*(++c)-c;
	printf("Value of a=%d\n b=%d\n c=%d\n Value of y is %d",a,b,c,y);
	return 0;
}
