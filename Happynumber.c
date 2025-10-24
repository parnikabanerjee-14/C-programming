//WAPC to input a number and check whether it is a happy number

#include<stdio.h>
int main()
{
	int num,sum=0,rem,storenum;
	printf("\nEnter a number:");
	scanf("%d",&num);
	storenum=num;
	while(num>0 || sum>9)
	{
     if(num==0)
	 {
		num=sum;
		sum=0;
	 }
	 rem=num%10;
	 sum+= rem*rem;
	 num=num/10;
	}
	if(sum==1)
	{
		printf("\nIt is a Happy Number");
	}
	else{
		printf("\nIt is not a Happy Number");
	}
	return 0;
}
