//WAPC to calculate BMI and classify the weight

#include<stdio.h>
int main()
{
	float height,weight,bmi;int age;
	printf("\nEnter the height f the person:");
	scanf("%f",&height);
	printf("\nEnter the weight of the person:");
	scanf("%f",&weight);
	printf("\nEnter the age of the person:");
	scanf("%d",&age);
	bmi=weight/(height*height);
	if(age<=40)
	{
		if(bmi<18.5)
		{
			printf("\nUnderweight");
		}
		else if(bmi>=18.5 && bmi<25)
		{
			printf("\nNormal");
		}
		else if(bmi>=25 && bmi<30)
		{
			printf("\nOverweight");
		}
		else
		{
			printf("\nObese");
		}
	}
	else
	{
		if(bmi>=25)
		{
			printf("\nConsult doctor");
		}
	}
	return 0;
}
