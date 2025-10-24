//WAPC to find and display the second highest element from an array of n elements

#include<stdio.h>
int main()
{
	int i,n,max,secmax;
	printf("\nEnter the total number of elements to be stored in the array:");
	scanf("%d",&n);
	int arr[n];
	printf("\nEnter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	max=arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	secmax=arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]>secmax && arr[i]<max)
		{
			secmax=arr[i];
		}
	}
	printf("\nThe second highest element in the array is %d",secmax);
	return 0;
}
