//WAPC to check whether a citizen is eligible or not

#include<stdio.h>
int main()
{
	int age;char citistat,crimrec;
	printf("\nEnter the age of the person:");
	scanf("%d",&age);
	printf("\nEnter the citizenship status of the person:");
	scanf("%c",&citistat);
	printf("\nEnter the criminal record of the person:");
	scanf("%c",&crimrec);
	
	if(age>=18 && citistat=='Y'&& crimrec=='N')
	{
		printf("\nCitizen eligible");
	}
	else if(age>=60 && citistat=='Y'&& crimrec=='N')
	{
		printf("\nSenior Citizen eligible");
	}
	else
	{
		printf("\nNot eligible because:");
		if(age<18)
		{
			printf("\tcitizen is below the age of 18");
		}
		else if(citistat!='Y')
		{
			printf("\tcitizenship is not valid");
		}
		else
		{
			printf("\tcitizen has criminal record");
		}
		return 0;
	}
}
