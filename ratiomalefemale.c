//WAPC to find the gender ratio based on the number of males and number of females

#include<stdio.h>
int main()
{
	int noOfMales,noOfFemales;
	double ratio;
	printf("\nEnter the number of males:");
	scanf("%d",&noOfMales);
	printf("\nEnter the number of females:");
	scanf("%d",&noOfFemales);
	ratio=(double)noOfMales/noOfFemales;
	printf("The ratio of the number of males to number of females is:\n%.2f",ratio);
	return 0;
}
