//WAPC to input a number and check whether the number is Armstrong or not

#include<stdio.h>
int main()
{
	int num,digit,digitcube,sum=0,storenum;
	printf("\nEnter the number:");
	scanf("%d",&num);
	storenum=num;
	while(num!=0)
	{
		digit=num%10;
		num=num/10;
		digitcube=digit*digit*digit;
		sum=sum+digitcube;
	}
	if(sum==storenum)
	{
		printf("%d is an Armstrong number",storenum);
	}
	else
	{
		printf("%d is not an Armstrong number",storenum);
	}
	return 0;
}
