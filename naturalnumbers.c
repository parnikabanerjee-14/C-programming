//WAPC to display the first n natural numbers where n is the user input

#include<stdio.h>
int main()
{
	int nval,i;
	printf("\nEnter the value of n:");
	scanf("%d",&nval);
	printf("\nThe first n natural numbers are:");
	for(i=1;i<=nval;i++)
	{
		printf("\n %d",i);
	}
	return 0;
}
