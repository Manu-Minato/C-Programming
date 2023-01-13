//WAP to to calculate electricity bill

#include<stdio.h>
int main()
{
	float unit,cost,ba;
	printf("Enter Units:");
	scanf("%f",&unit);
	if (unit<=50)
		cost=0.50*unit;
	else if(unit<=150)
		{
			cost= 25+(unit-50)*0.75;
		}
	else if( unit<=250)
		{
			cost=100+(unit-150)*1.20;
		}
	else 
		{
			cost =220+(unit-250)*1.50;
		}
	ba=cost+cost*0.20;
	printf("Your bill amount is Rs %0.2f",ba);
	return 0;	
}
