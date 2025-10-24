//WAPC to reverse an array and display the original and the reversed array

#include<stdio.h>

int main()
{
	int i,left,right,temp;     //Declare an integer array of 5 elements
	int arr[5];
	for (i=0;i<5;i++)
	{
		printf("\nEnter arr[%d]:",i);
		scanf("%d",&arr[i]);
	}
	printf("\nOriginal array is as follows:");
	for(i=0;i<5;i++)
	{
		printf("arr[%d]=%d\t",i,arr[i]);
	}
	left=0;
	right=4;
	while(left<right)
	{
		temp=arr[left];
		arr[right]=temp;
		++left;
		--right;
	}
}
