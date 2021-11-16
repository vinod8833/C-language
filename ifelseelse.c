#include<stdio.h>
void main()
{
int marks;

printf("enter your marks ");
scanf("%d",&marks);
	if(marks==100)
	{ 
		printf("GINIUS");
	}
	else if(marks>=80 && marks<=100)
	{
		printf("TOPPER");
	}
	else if(marks>=60 && marks<=80)
	{
		printf("FRIST");
	}
	else if(marks>=30 && marks<=60)
	{
		printf("AVARAGE");
	}
} 