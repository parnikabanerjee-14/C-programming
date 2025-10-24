//WAPC to input a number and check whether it is palindrome or not

#include<stdio.h>
int main()
{
	int num,i,rem,storenum,rev=0;
	printf("\nEnter the number:");
	scanf("%d",&num);
	storenum=num;
	for(i=1;i<=num;i++)
	{
		rem=num%10;
		rev=rev*10 + rem;
		num=num/10;
	}
	if(rev==storenum)
	{
		printf("%d is a palindrome number",storenum);
	}
	else
	{
		printf("%d is not a palindrome number",storenum);
	}
	return 0;
}
