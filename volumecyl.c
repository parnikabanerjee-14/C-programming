//WAPC to input the radius and height and calculate the volume of a cylinder

#include<stdio.h>
int main()
{
	float pi=3.142;
	float radius,height,cylinderVolume;
	printf("\nEnter the radius and height of the cylinder");
	scanf("%^f %f",&radius, &height);
	cylinderVolume=pi*radius*radius*height;
	printf("\nVolume of the cylinder is %.2f",cylinderVolume);
	return 0;
}
