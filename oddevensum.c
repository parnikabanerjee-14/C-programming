//WAPC to find the sum of the first n odd numbers and even numbers

#include<stdio.h>
int main()
{
	int nval,oddsum=0,evensum=0,i;
	printf("\nEnter the value of n");
	scanf("%d",&nval);
	for(i=1;i<=nval;i++)
	{
		if(i%2==0)
		{
			evensum=evensum+i;
		}
		else
		{
			oddsum=oddsum+i;
		}
	}
	printf("\nThe sum of odd numbers is %d",oddsum);
	printf("\nThe sum of even numbers is %d",evensum);
	return 0;
}
