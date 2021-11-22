#include<stdio.h>
void main()
{
	int rev=0,temp,n;
	printf("enter the number :");
	scanf("%d",&n);
	temp=n;
	while(temp!=0)
	{
		rev=rev*10;
		rev=rev+temp%10;
		temp=temp/10;
			}
printf("the reverse number %d\n",rev);
if(n==rev)
	printf("polindrome\n");
else
	printf("not polindrome\n");

}

out put:-
	enter the number :151
the reverse number 151
polindrome
