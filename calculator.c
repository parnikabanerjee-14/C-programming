//WAPC to design a basic calculator capable of addition,subtraction,multiplication,division

#include<stdio.h>
float add(float num1,float num2)
{
	return num1+ num2;
}
float subtract(float num1,float num2)
{
	return num1 - num2;
}
float multiply(float num1,float num2)
{
	return num1 * num2;
}
float divide(float num1,float num2)
{
	return num1/num2;
}

int main()
{
	float num1,num2,result;
	char symb;
	printf("\nEnter two numbers:");
	scanf("%d %d",&num1,num2);
	printf("\nEnter a mathematical symbol(+,-,*,/):");
	scanf("%c",&symb);
	
	switch(symb)
	{
	case '+':
	 result=add(num1,num2);
	 printf("%f + %f = %f\n",num1,num2,result);
	 break;	
	
	case '-':
		result=subtract(num1,num2);
		printf("%f - %f =%f\n",num1,num2,result);
		break;
		
	case '*':
		result=multiply(num1,num2);
		printf("%f * %f =%f\n",num1,num2,result);
		break;
		
	case '/':
		result=divide(num1,num2);
		printf("%f / %f =%f\n",num1, num2,result);
		break;

  default:
  	printf("\nInvalid Operator");
  	break;
}
  return 0;
}
  	
  	
  	
