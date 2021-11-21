#include<stdio.h>

int main()
{
	int*p,**q,a=10;
	p=&a;
	q=&p;
	printf("%d\n",a);
	printf("%d\n",*p);
	printf("%d\n",**q);
	
	


}
out put:-
10
10
10
