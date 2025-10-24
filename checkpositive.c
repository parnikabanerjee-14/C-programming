//WAPC to input two numbers and check if either of the two is positive

#include<stdio.h>
int main()
{
	int number1,number2;
	printf("\nEnter the two integers:");
	scanf("%d %d",&number1,&number2);
	if(number1>0||number2>0)
	{
		printf("\nOne or more inputs is positive");
	}
	else
	{
		printf("\nNone of the inputs is positive");
	}
	return 0;
}
