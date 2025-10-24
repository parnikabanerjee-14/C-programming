//WAPC to swap two numbers using a third variable
#include<stdio.h>
int main()
{
	int num1,num2,swap;
	printf("\nEnter the first integer:");
	scanf ("%d",&num1);
	printf("\nEnter the second integer:");
	scanf("%d",&num2);
	num1=num2;
	swap=num1;
	num1=num2;
	num2=swap;
	printf("First number after swapping is %d",num1);
	printf("Second number after swapping is %d",num2);
	return 0;
}
