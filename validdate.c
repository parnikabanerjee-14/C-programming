//Wapc to input date,month and year and check whether date is valid or invalid

#include<stdio.h>
int main()
{
	int day,month,year,leapYearFlag,validDateFlag;
	printf("\nEnter the date in terms of day,month and year");
	scanf("%d %d %d",&day,&month,&year);
	
	
	//leap year checking
	if(year%100==0)
	{
		if(year%400==0)
		{
			leapYearFlag=1;
		}
		else
		{
			leapYearFlag=0;
		}
	}
	else
	{
		if(year%4==0)
		{
			leapYearFlag=1;
		}
		else
		{
			leapYearFlag=0;
		}
	}
	if(month<1 || month>12)
	{
		validDateFlag=0;
	}
	if(day<1 || day>31)
	{
		validDateFlag=0;
	}
	if(year<0)
	{
		validDateFlag=0;
	}
	if(leapYearFlag==1 && month==2)
	{
		if(day>29)
		{
			validDateFlag=0;
		}
	}
	if(leapYearFlag==0 && month==2)
	{
		if(day>=29)
		{
			validDateFlag=0;
		}
	}
	if(validDateFlag==1)
	{
		printf("\nValid date");
	}
	else
	{
		printf("\nInvalid date");
	}
	return 0;
}
