//WAPC to input a number and find the number of digits,sum and product of digits

#include<stdio.h>
int main()
{
	int num,sum=0,prod=1,count=0,rem;
	printf("\nEnter a number:");
	scanf("%d",&num);
	while(num!=0)
	{	
	rem=num%10;	
	num=num/10;
	++count;
	sum=sum+rem;
	prod=prod*rem;	
	}
	printf("\nNumber of digits is %d",count);
	printf("\nSum of digits=%d",sum);
	printf("\nProduct of digits=%d",prod);
	return 0;
}
