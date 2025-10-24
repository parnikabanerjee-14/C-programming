//WAPC to input a number and check whether it is Niven or not

#include<stdio.h>
int main()
{
	int num,store,div,sum=0;
	printf("\nEnter the number:");
	scanf("%d",&num);
	store=num;
	while(num!=0)
	{
		div=num%10;
		num=num/10;
		sum=sum+div;
	}
	if(store%sum==0)
	{
		printf("\n%d is a Niven number",store);
	}
	else
	{
		printf("\n%d is not a Niven number",store);
	}
	return 0;
}
