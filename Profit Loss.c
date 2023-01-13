//WAP to calculate profit loss

#include<stdio.h>
int main()
{
	float cp,sp,mp,p,l,pp,lp;
	printf("Enter Cost Price of the product:Rs ");
	scanf("%f",&cp);
	printf("Enter Maintenance Price of the product:Rs ");
	scanf("%f",&mp);
	printf("Enter Selling Price of the product:Rs ");
	scanf("%f",&sp);
	if ((cp+mp)>sp)
		{
			l=(cp+mp)-sp;
			printf("You faced loss of Rs %0.2f\n",l);
			lp=(l/(cp+mp))*100;
			printf("Loss Percentage= %0.2f%%",lp);
		}	
	else if ((cp+mp)<sp)
		{
			p=sp-(cp+mp);
			printf("You made profit of Rs %0.2f\n",p);
			pp=(p/(cp+mp))*100;
			printf("Profit Percentage= %0.2f%%",pp);
		}
	else 
		printf("You made NO LOSS-NO PROFIT");
return 0;		
}
