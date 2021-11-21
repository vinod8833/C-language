#include<stdio.h>
int main()
{
	float width,length,area,perimeter;
	printf("enter the length of a rectangle :");
	scanf("%f",&length);
	printf("enter the width of a rectangle :");
	scanf("%f",&width);
	area=width*length;
	perimeter=2*(width+length);
	printf("\n area of rectangle is :%f",area);	
	printf("\n perimeter of rectangle is :%f",perimeter);
	
	return 0;	

}
