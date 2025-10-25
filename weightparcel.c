//WAPC to accept the weight of a parcel and calculate the rate per kg

#include<stdio.h>
int main()
{
	unsigned int weight,rate;
	char courier;
	printf("\nEnter the weight");
	scanf("%u",&weight);
	printf("\nEnter the type of courier(I or D):");
	scanf(" %c",&courier);
	if(weight<=5)
	{
	if(courier=='D')
	{
		rate=800*weight;
		printf("\n%u is the rate charged",rate);
		}	
		else if(courier=='I')
		{
			rate=(800*weight)+1500;
			printf("\n%u is the rate charged",rate);
		}
	}
	else if(weight>5 && weight<=10)
	{
		if(courier=='D')
		{
			rate=700*weight;
			printf("\n%u is the rate charged",rate);
		}
		else if(courier=='I')
		{
			rate=(700*weight)+1500;
			printf("\n%u is the rate charged",rate);
		}
	}
	else if(weight>10)
	{
		if(courier=='D')
		{
			rate=500*weight;
			printf("\n%^u is the rate charged",rate);
		}
		else if(courier=='I')
		{
			rate=(500*weight)+1500;
			printf("\n%u is the rate charge",rate);
		}
		return 0;
	}
}
