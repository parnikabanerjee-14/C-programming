//WAPC to input the coordinates of two points and calculate the slope

#include<stdio.h>
int main()
{
	int x1,x2,y1,y2;
	float slope;
	printf("\nEnter the x coordinates:");
	scanf("%d %d",&x1,&x2);
	printf("\nEnter the y coordinates:");
	scanf("%d %d", &y1,&y2);
	slope=(y2-y1)/(x2-x1);
	printf("\nThe slope is %d",slope);
	return 0;
}
