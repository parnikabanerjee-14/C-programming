//WAPC to input an integer and if it is positive check whether it is odd or even

#include<stdio.h>
int main()
{
	int number;
	printf("\nEnter a number:");
	scanf("%d",&number);
	if(number>0)
	{
		if(number%2==0)
		{
			printf("%d is an even number",number);
		}
		else
		{
			printf("\n%d is an odd number",number);
		}
	}
	else
	{
		printf("\n%d is a negative number",number);
	}
	return 0;
}
