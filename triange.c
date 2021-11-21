#include<stdio.h>
int main()
{
	float base,height,area;
	printf("enter the base of a triangle :");
	scanf("%f",&base);
	printf("enter the height of a triangle :");
	scanf("%f",&height);
	area=(base*height)/2;
	printf("area of triangle using the base of height =%f\ns",area);	
		
	return 0;	
}
