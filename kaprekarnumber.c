//WAPC to input a number and check whether it is a Kaprekar number or not

#include<stdio.h>
#include<math.h>
int main()
{
	int num,square,rem,digit,sum=0,store,right,left;
	printf("\nEnter a number:");
	scanf("%d",&num);
	square=num*num;
    store=num; 	
    while(store>0)
    {
    	digit++;
    	store/=10;
	}
	right=square%(int)pow(10,digit);
	left=square/(int)pow(10,digit);
	if(num==1 || left + right == num)
	{
	printf("\nIt is a Kaprekar number"); 
    }
    else
    {
    	printf("\nIt is not a Kaprekar number");
	}
   return 0;
}
