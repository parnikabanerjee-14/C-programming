//WAPC to check if a number is of three digits and is divisible by three

#include<stdio.h>
int main()
{
	int number;
	printf("\nEnter an integer:");
	scanf("%d",&number);
	if(number>=100 && number<=999)
	{
		if(number%3==0)
		{
			printf("\n%d is a three digit number and is divisible by 3",number);
		}
		else 
		{
			printf("\n%d is a three digit number but is not divisible by 3",number);
		}
}
 else
 {
 	if(number%3==0)
 	{
 		printf("\n%d is divisible by 3 but it is not a three digit number",number);
	 }
	 else
	 {
	 	printf("\n%dis neither a three digit number nor is it divisible by three ",number);
	 }
 }
return 0;	
}
