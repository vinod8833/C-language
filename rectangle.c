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
out put:-
	enter the length of a rectangle :675
enter the width of a rectangle :97 

 area of rectangle is :65475.000000
 perimeter of rectangle is :1544.000000d
