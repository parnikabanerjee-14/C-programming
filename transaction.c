//WAPC to input the account balance and withdrawal amount and check whether transaction is successful

#include<stdio.h>
int main()
{
	int accbalance,withdrawamt;
	printf("\nEnter the account balance:");
	scanf("%d",&accbalance);
	printf("\nEnter the withdrawal amount:");
	scanf("%d",&withdrawamt);
	if(withdrawamt%100==0 && withdrawamt<=accbalance && (accbalance-withdrawamt)>=500)
	{
		printf("\nTransaction success");
	}
	else if(withdrawamt%100!=0 && withdrawamt<=accbalance && (accbalance-withdrawamt)>=500)
	{
		printf("\nTransaction failure because withdrawal amount is not a multiple of 100");
	}
	else if(withdrawamt%100!=0 && withdrawamt >accbalance && (accbalance-withdrawamt)>=500)
	{
		printf("\nTransaction failure because withdrawal amount is not a multiple of 100 and withdrawalexceeds balance");
	}
	else if(withdrawamt%100!=0 && withdrawamt<=accbalance && (accbalance-withdrawamt)<500)
	{
		printf("\nTransaction failure because withdrawal amount is not a multiple of 100 and account balance after withdrawal is less than 500");
	}
	else if(withdrawamt%100==0 && withdrawamt>accbalance && (accbalance-withdrawamt)>=500)
	{
		printf("\nTransaction failure because withdrawal amount exceeds account balance");
	}
	else if(withdrawamt%100==0 && withdrawamt>accbalance && (accbalance-withdrawamt)<500)
	{
		printf("\nTransaction failure because withdrawal amount exceeds account balance and account balance after withdrawal is less than 500");
	}
	else if(withdrawamt%100==0 && withdrawamt<=accbalance && (accbalance-withdrawamt)<500)
	{
		printf("\nTransaction failure because account balance after withdrawalis less than 500");
	}
	else
	{
		printf("\nTransaction failure because withdrawal amount is not a multiple of 100,withdrawal exceeds balance and balance after withdrawal is less than 500");
	}
	return 0;
}
