#include <stdio.h>
int main()
{
	
	int i,factorial=1,number;
	printf("enter the any number :");
	scanf("%d",&number);
	for (i=1;i<=number;i++)
	{
		factorial=factorial*i;
	}
		printf("factorial of %d is %d",number,factorial);
		return 0;
	}
