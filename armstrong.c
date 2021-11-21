#include<stdio.h>
int main()
{
	int n,r,sum=0,temp;
	printf("enter the number :");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(temp==sum)
		printf("armstrong number");
	else
		printf("not armstrong number");
	return 0;
}
out put:-
nter the number :3567
not armstrong numberdileep@dileep-Latitude-E7450:~/vinod$ ./a.out 
enter the number :6
not armstrong numberdileep@dileep-Latitude-E7450:~/vinod$ ./a.out 
enter the number :357
not armstrong numberdileep@dileep-Latitude-E7450:~/vinod$ ./a.out 
enter the number :135
not armstrong numberdileep@dileep-Latitude-E7450:~/vinod$ ./a.out 
enter the number :153
armstrong numberdileep@dileep-Latitude-E7450:~/vinod$ 
