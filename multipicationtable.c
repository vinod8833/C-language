#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the multiplication table number: ");
	scanf("%d",&n);
	for (i=1; i<=10; ++i)
	{
	
		printf("%d*%d=%d\n",n,i,n*i);
	}
	
	return 0;
}

out put:-
enter the multiplication table number: 8
8*1=8
8*2=16
8*3=24
8*4=32
8*5=40
8*6=48
8*7=56
8*8=64
8*9=72
8*10=80
