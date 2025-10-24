//WAPC to initialize an array with 10 elements and search for an element using binary search

#include<stdio.h>
int main()
{
	int arr[10]={13,17,28,39,45,56,70,82,89,100};
	int search;
	printf("\nEnter the element to be searched:");
	scanf("%d",&search);
	int left=0,right=9;
	int mid;
	int flag=0;
	while(left<right)
	{
		mid=(left+right)/2;
		if(search==arr[mid])
		{
			flag=1;
			break;
		}
		else if(search>arr[mid])
		{
			left=mid+1;
		}
		else
		{
			right=mid-1;
		}
	}
	if(flag==1)
	{
		printf("\nThe search element is found at %d:",mid);
	}
	else
	{
		printf("\nThe search element is not found");
	}
return 0;
}
