//WAPC to check and print if a number is divisible by both 3 and 5

#include<stdio.h>
int main()
{
	int number;
	printf("\nEnter a number:");
	scanf("%d",&number);
	if(number%3==0 && number%5==0)
	{
		printf("\n%d is divisible by both 3 and 5",number);
	}
	else if(number%3==0 && number%5 !=0)
	{
		printf("\n%d is divisible by 3 but not by 5",number);
	}
	else if(number%5==0 && number%3 !=0)
	{
		printf("\n%d is divisible by 5 but not by 3",number);
	}
	else
	{
		printf("\n%d is divisible by neither 3 nor 5",number);
	}
	return 0;
}
