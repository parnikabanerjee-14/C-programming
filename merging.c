//WAPC to input two sorted arrays and merge these two arrays into a single sorted array

#include<stdio.h>
int main()
{
	int arr1[10000],arr2[10000],arr3[20000];
	int len1,len2,len3,i;
	printf("\nEnter the size of the first array:");
	scanf("%d",&len1);
	printf("\nEnter the array elements:");
	for( i=0;i<len1;i++)
	scanf("%d",&arr1[i]);
	printf("\nEnter the size of the second array:");
	scanf("%d",&len2);
	printf("\nEnter the array elemnts:");
	for(i=1;i<len2;i++)
	scanf("%d",&arr2[i]);
	len3=len1+len2;
	 int j=0,k=0;
	while(i<len1 && j<len2)
	{
		if(arr1[i]<arr2[j])
		{
			arr3[k++]=arr1[i++];
		}
		else
		{
			arr3[k++]=arr2[j++];
		}
	}
	while(i<len1)
	arr3[k++]=arr1[i++];
	
	while(j<len2)
	arr3[k++]=arr2[j++];
	
	printf("\nFinal array after merging:");
	for(i=0;i<len3;i++)
	printf("%d",arr3[i]);
	
	return 0;
}
