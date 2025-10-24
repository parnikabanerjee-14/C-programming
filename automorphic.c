//WAPC to check whether a number is automorphic or not

#include<stdio.h>
int main()
{
	int num,square,store,flag;
	printf("Enter the number:",&num);
	scanf("%d",&num);
	square=num*num;
	store=num;
	while(num!=0)
	{
		if(square%10!=num%10)
		{
			flag=0;
			break;
		}
		num=num/10;
		square=square/10;
		
	}
	if(flag==1)
	{
		printf("%d is an Automorphic number",store);
	}
	else
	{
		printf("%d is not an Automorphic number",store);
	}
	return 0;
}
