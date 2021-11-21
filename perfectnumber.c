#include<stdio.h>
int main()
{
	int i,number,sum=0;
	printf("enter the number :");
	scanf("%d",&number);
	for (i = 1; i < number; ++i)
	{
		if(number % i==0)
			sum=sum+i;
	}
	if(sum==number)
		printf("%d is perfect number",number);
	else
		printf("%d is not perfect number",number);
	
	return 0;
}

out put;-

enter the number :28
28 is perfect numberdileep@dileep-Latitude-E7450:~/vinod$ ./a.out 
enter the number :6
6 is perfect numberdileep@dileep-Latitude-E7450:~/vinod$ ./a.out 
enter the number :565
565 is not perfect numberdileep@dileep-Latitude-E7450:~/vinod$ 
