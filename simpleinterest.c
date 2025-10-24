//WAPC to find the simple interest based on user inputs

#include<stdio.h>
int main()
{
	float principal,si,rate,time;
	printf("\nEnter the principal amount:");
	scanf("%f",&principal);
	printf("\nEnter the rate of interest:");
	scanf("%f",&rate);
	printf("\nEnter the time period:");
	scanf("%f",&time);
	si=(principal*rate*time)/100;
	printf("\nThe simple interest is %f",si);
	return 0;
}
