//WAPC to input a positive integer and find its factorial

#include<stdio.h>
int main()
{
	int number,prod=1,i;
	printf("\nEnter the number :");
	scanf("%d",&number);
	for(i=1;i<=number;i++)
	{
		prod=prod*i;
	}
	printf("\nFactorial of the number is %d",prod);
	return 0;
}
