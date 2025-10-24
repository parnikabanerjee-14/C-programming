//WAPC to convert a temperature in Celsius to Farenheit

#include<stdio.h>
int main()
{
	float tempinCel,tempinFar;
	printf("\nEnter temperature in Celsius scale:");
	scanf("%f",&tempinCel);
	tempinFar=(tempinCel*(9/5))+32;
	printf("Temperature in Farenheit is %f",tempinFar);
	return 0;
}
