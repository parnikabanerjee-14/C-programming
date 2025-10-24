//WAPC to check whether a triangle is valid or not.Check whether it is equilateral,scalene or isosceles.

#include<stdio.h>
int main()
{

float side1,side2,side3;
printf("\nEnter the length of the three sides:");
scanf("%f %f %f",&side1,&side2,&side3);
if((side1+side2)>side3|| (side2+side3)>side1 ||(side1+side3)>side2)
{
	printf("\nTriangle is valid");
       
	   
		if(side1==side2 && side2==side3 && side1==side3)
		{
			printf("\nIt is an Equilateral Triangle");
		}
		else if(side1==side2 || side2==side3||side1==side3)
		{
			printf("\nThe triangle is isosceles");
		}
		else
		{
			printf("\nThe triangle is Scalene");
		}
		
	}
	else
	{
		printf("THE TRIANGLE IS NOT VALID!!!");
	}
	return 0;
}
