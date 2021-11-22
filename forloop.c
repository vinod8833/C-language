#include<stdio.h>
void main()
{
	int number, i;
	printf("enter the number :");
	scanf("%d",&number);
	printf("list of natural number %d are \n",number);
	for(i=1;i<=number;++i)
	{
		printf("%d ",i);
	}
	return 0;
}

out put:-
enter the number :18
list of natural number 18 are 
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18
