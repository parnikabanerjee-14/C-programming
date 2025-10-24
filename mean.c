//WAPC to input 5 integers and calculate the mean

#include<stdio.h>
int main()
{
	int num1,num2,num3,num4,num5;
	float mean;
	printf("\nEnter the five integers:");
	scanf("%d %d %d %d %d",&num1,&num2,&num3,&num4,&num5);
	mean=(num1 + num2 + num3 + num4 + num5)/5.0f;
	printf("\nThe mean of 5 integers is %.2f",mean);
	return 0;
}
