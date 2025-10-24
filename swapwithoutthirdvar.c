//WAPC to swap two integers without using a thirs variable

#include<stdio.h>

int main()
{
	int num1,num2;
	printf("\nEnter two integers:");
	scanf("%d %d",&num1,&num2);
	num1=num1+num2;
	num2=num1-num2;
	num1=num1-num2;
	printf("\nAfter swapping num1=%d,num2=%d",num1,num2);
	return 0;
}
