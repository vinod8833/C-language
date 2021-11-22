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
out put:-
	enter your marks 56  
AVARAGEdileep@dileep-Latitude-E7450:~/vinod$ ./a.out 
enter your marks 100
GINIUSdileep@dileep-Latitude-E7450:~/vinod$ ./a.out 
enter your marks 88
TOPPERdileep@dileep-Latitude-E7450:~/vinod$ ./a.out 
enter your marks 38
AVARAGEdileep@dileep-Latitude-E7450:~/vinod$ 

