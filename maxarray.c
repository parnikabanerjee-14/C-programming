/*WAPC to declare an integer array of 'n' elements.Accept integers from the user and store them in
the array.Find the maximum element in the array*/

int main()
{
	int i,n,maximum;
	//1.Declare an integr array of 'n' elements
	printf("\nEnter the total number of elements to be stored in the array:");
	scanf("%d",&n);
	int arr[n];
	//2.Accept integers from the user and store them in the array
	for(i=0;i<n;i++)
	{
		printf("\nEnter an integer:");
		scanf("%d",&arr[i]);
		
	}
	//3.Find the maximum element in the array
	maximum=arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]>maximum)
		{
			maximum=arr[i];
		}
	}
	printf("\nThe maximum element in the array is %d",maximum);
	return 0;
}
