//WAPC to input a 4 digit number and find the sum of leftmost and rightmost digit

#include<stdio.h>
int main()
{
	int number,leftmostDigit,rightmostDigit;
	printf("\nEnter a 4-digit number:");
	scanf("%d",&number);
	rightmostDigit=number% 10;
	leftmostDigit=number/1000;
	printf("\nProduct of the leftmost and the rightmost digit is %d",leftmostDigit*rightmostDigit);
	printf("\nSum of the leftmost and the rightmost digit is %d",leftmostDigit+rightmostDigit);
	return 0;
}
