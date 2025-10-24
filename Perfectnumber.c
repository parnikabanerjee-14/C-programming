//WAPC to input a number and check whether a number is a perfect number

#include<stdio.h>
int main()
{
	int num,i,sum=0;
	printf("\nEnter the number:");
	scanf("%d",&num);
	for(i=1;i<num;i++)
	{
		if(num%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==num)
	{
		printf("%d is a Perfect number",num);
	}
	else
	{
		printf("%d is not a Perfect number",num);
	}
	return 0;
}
