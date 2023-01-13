// WAP to find eligibilty of admission 

#include<stdio.h>
int main()
{
	int m,p,c,t;
	t=m+p+c;
	printf("Enter Maths marks:");
	scanf("%d",&m);
	printf("Enter Physics marks:");
	scanf("%d",&p);
	printf("Enter Chemistry marks:");
	scanf("%d",&c);
	if(m>=65 && p>=55 && c>=50 && t>=180)
		printf("YOU ARE ELIGIBLE");
	else
		printf("YOU ARE NOT ELIGIBLE");
return 0;
}
