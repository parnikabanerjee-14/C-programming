/* WAPC to input an integer array from the user and sort the array in descending order using selection
sort technique. */

#include<stdio.h>
int main()
{
	int arr[100],i,j,k,pos,num;
	printf("\nEnter the length of the array:");
	scanf("%d",&num);
	printf("Enter the array elements:");
	for(i=0;i<num;i++)
	scanf("%d",&arr[i]);
	for(i=0;i<num-1;i++)
	{
		pos=i;
	for(j=i+1;j<num;j++)
	{
		if(arr[pos]<arr[j])
		pos=j;
		}
		if(pos!=i)
		{
		k=arr[i];
		arr[i]=arr[pos];
		arr[pos]=k;	
		}
		
	}
	printf("\nSorted array is:");
	for(i=0;i<num;i++)
    printf("\n%d",arr[i]);
    
    return 0;
	}

