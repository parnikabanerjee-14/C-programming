//WAPC to input a number and check whether it is an abundant number

#include<stdio.h>
int main()
{
	int num,i,sum=0;
	printf("\nEnter a number:");
	scanf("%d",&num);
	for(i=1;i<num;i++)
	{
		if(num%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum>num)
	{
		printf("\n%d is an Abundant number",num);
	}
	else
	{
		printf("\n%d is not an Abundant number",num);
	}
	return 0;
}
