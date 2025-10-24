//WAPC to input the number of units of electricitty consumption and calculate the electricity bill

#include<stdio.h>
int main()
{
	int units, bill;float surchargedbill;
	printf("\nEnter the number of units consumed:");
	scanf("%d",units);
	if(units<=100)
	{
		bill=2*units;
		printf("\nThe electricity bill amounts to%d",bill);
	}
	else if(units>100 &&units<=300)
	{
		bill=3*units;
		printf("/nThe electricity bill amounts to %d",bill);
	}
	else if (units>300)
	{
		bill=4*bill;
		surchargedbill=(2.5/100)*bill+bill;
		printf("\nThe electricity bill amounts to %f",surchargedbill);
	}
	return 0;
}
