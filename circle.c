#include<stdio.h>
int main()
{
	float r,area,perimeter;

	printf("enter the radius of circle :");
	scanf("%f"&r);
	area=3.14*r*r;
	perimeter=2*3.14*r;
	printf("the area of circle is %f\n",area);
	printf("the perimeter of circle is %f\n",perimeter);
	return 0;
}
