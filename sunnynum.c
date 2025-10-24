//WAPC to input a number and check whether it is a Sunny number or not

#include<stdio.h>
#include<math.h>
int main()
{
	int num,num1,root;
	printf("\nEnter a number:");
	scanf("%d",&num);
	num1=num+1;
	root=(int)sqrt(num1);
	if(root*root==num1)
	{
		printf("\n%d is a Sunny number",num);
	}
	else
	{
		printf("\n%d is not a Sunny number",num);
	}
	return 0;
}
