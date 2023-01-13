// WAP TO CALCULATE PARKING FARE

#include<stdio.h>
int main()
{

/* vt is vehicle type,hi is time-in in hours,mi is time-in in minutes,ho is time-out in hour,
mo is time-out in minutes,pth is parking time in hour,ptm is parking time in minute,pt is parking time */

    char vt;
	float hi,mi,ho,mo,pth,ptm,pt,charge;
	printf("Enter the type of vehicle\n('C':for car, 'B':for bus or truck, 'M':for scooter or motorcycle)---->");
	scanf("%c",&vt);

// FOR CAR

	if (vt=='c' || vt=='C')
	{
		printf("Hour vehicle entered the lot    (0-24)---->");
	    scanf("%f",&hi);
		printf("Minute vehicle entered the lot  (0-60)---->");
		scanf("%f",&mi);
		printf("Hour vehicle left the lot       (0-24)---->");
		scanf("%f",&ho);
		printf("Minute vehicle left the lot     (0-60)---->");
		scanf("%f",&mo);
		if (ho>=hi && mo>=mi)
		{
			pth=ho-hi;
			ptm=(mo-mi);
			pt=pth+(ptm/60);		
		}
		else if (ho>=hi && mo<=mi)
		{
			ho=ho-1;
			mo=mo+60;
			pth=ho-hi;
			ptm=(mo-mi);
			pt=pth+(ptm/60);
		}
		else if (ho<=hi && mo>=mi)
		{
			ho=ho+24;
			pth=ho-hi;
			ptm=(mo-mi);
			pt=pth+(ptm/60);
		}
		else if (ho<=hi && mo<=mi)
		{
			ho=ho+23;
			mo=mo+60;
			pth=ho-hi;
			ptm=(mo-mi);
			pt=pth+(ptm/60);
		}
		else 
		{
			return 0;
		}
		
		charge=pt*10;	
	}

// FOR BUS/TRUCK

	else if (vt=='b' || vt=='B')
	{
	printf("Hour vehicle entered the lot    (0-24)---->");
	    scanf("%f",&hi);
		printf("Minute vehicle entered the lot  (0-60)---->");
		scanf("%f",&mi);
		printf("Hour vehicle left the lot       (0-24)---->");
		scanf("%f",&ho);
		printf("Minute vehicle left the lot     (0-60)---->");
		scanf("%f",&mo);
		if (ho>=hi && mo>=mi)
		{
			pth=ho-hi;
			ptm=(mo-mi);
			pt=pth+(ptm/60);		
		}
		else if (ho>=hi && mo<=mi)
		{
			ho=ho-1;
			mo=mo+60;
			pth=ho-hi;
			ptm=(mo-mi);
			pt=pth+(ptm/60);
		}
		else if (ho<=hi && mo>=mi)
		{
			ho=ho+24;
			pth=ho-hi;
			ptm=(mo-mi);
			pt=pth+(ptm/60);
		}
		else if (ho<=hi && mo<=mi)
		{
			ho=ho+23;
			mo=mo+60;
			pth=ho-hi;
			ptm=(mo-mi);
			pt=pth+(ptm/60);
		}
		else 
		{
			return 0;
		}
		
		charge=pt*20;	
	}

// FOR SCOOTER/MOTORCYCLE

	else if (vt=='m' || vt=='M')
	{
		printf("Hour vehicle entered the lot    (0-24)---->");
	    scanf("%f",&hi);
		printf("Minute vehicle entered the lot  (0-60)---->");
		scanf("%f",&mi);
		printf("Hour vehicle left the lot       (0-24)---->");
		scanf("%f",&ho);
		printf("Minute vehicle left the lot     (0-60)---->");
		scanf("%f",&mo);
		if (ho>=hi && mo>=mi)
		{
			pth=ho-hi;
			ptm=(mo-mi);
			pt=pth+(ptm/60);		
		}
		else if (ho>=hi && mo<=mi)
		{
			ho=ho-1;
			mo=mo+60;
			pth=ho-hi;
			ptm=(mo-mi);
			pt=pth+(ptm/60);
		}
		else if (ho<=hi && mo>=mi)
		{
			ho=ho+24;
			pth=ho-hi;
			ptm=(mo-mi);
			pt=pth+(ptm/60);
		}
		else if (ho<=hi && mo<=mi)
		{
			ho=ho+23;
			mo=mo+60;
			pth=ho-hi;
			ptm=(mo-mi);
			pt=pth+(ptm/60);
		}
		else 
		{
			return 0;
		}
		
		charge=pt*5;	
	}

	else
	{
		return 0;
	}
	
// HOW TO ASSIGN VALUE TO VARIABLE TEMPORARILY?	(NEED TO KNOW)
	char vvt[10];
	if (vt=='c' || vt=='C')
	{
		vvt == "CAR";
	}
	else if (vt=='b' || vt=='B')
	{
		vvt == "TRUCK/BUS";
	}
	else if (vt=='m' || vt=='M')
	{
		vvt == "SCOOTER/MOTORCYCLE";
	}
	else
	{
		vvt == "ENTER CORRECT VEHICLE TYPE!!";
	}
	
// RECEIPT PRINT

	printf("\n\n\n--------------------------------------------\n	PARKING LOT CHARGE\n--------------------------------------------	\n Type of vehicle: %c \n TIME-IN		%0.0f:%0.0f \n TIME-OUT		%0.0f:%0.0f\n 	   	   -------------\n PARKING TIME		%0.0f:%0.0f\n  	   	   -------------\n TOTAL CHARGE	     Rs %0.2f\n\n\n",vt,hi,mi,ho,mo,pth,ptm,charge);
	
	return 0;	
}
