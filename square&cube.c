//WAPC to input an integer and display its square and cube

#include<stdio.h>
int main()
{
	int number;float square,cube;
	printf("\nEnter the number:");
	scanf("%d",&number);
	square=number*number;
	cube=number*number*number;
	printf("\nThe square of the number is %d",square);
	printf("\nThe cube of the number is %d",cube);
	return 0;
}
