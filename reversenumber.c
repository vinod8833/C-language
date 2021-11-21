#include<stdio.h>
int main()
{
	int number,reminder,reverse=0;
	printf("enter the any number: ");
	scanf("%d",&number);
	while(number>0)
		{ reminder=number%10;
			reverse=reverse*10+reminder;
			number=number/10;
		}
	
		printf("sum of reverse of givine number =%d",reverse);

	
	return 0;
}

out put:-

enter the any number: 8833vinod8833
sum of reverse of givine number =3388dileep@dileep-Latitude-E7450:~/vinod$ ./a.out 
enter the any number: 8989
sum of reverse of givine number =9898dileep@dileep-Latitude-E7450:~/vinod$ ./a.out 
enter the any number: 88338833
sum of reverse of givine number =33883388dileep@dileep-Latitude-E7450:~/vinod$ 
