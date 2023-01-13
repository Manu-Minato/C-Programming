// WAP to take age of 15 people and determine in ehich range do they fall
#include<stdio.h>
int main()
{
	int i,age;
	for(i=1;i<=15;i++)
	{
		printf("Enter your age:");
		scanf("%d",&age);
		if(age>=0 && age<=5)
		printf("Still a baby\n");
		else if(age>=6 && age<=17)
		printf("Attending school\n");
		else
		printf("Adult life\n");
	}
	return 0;
}
