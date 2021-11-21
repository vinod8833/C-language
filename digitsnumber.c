#include<stdio.h>
int main()
{
	int number,reminder,sum=0;
	printf("enter the any number: ");
	scanf("%d",&number);
	while(number>0)
		{ reminder=number%10;
			sum=sum+reminder;
			number=number/10;
		}
	
		printf("sum of digits of givine number =%d",sum);

	
	return 0;
}

out put:-
enter the any number: 53
sum of digits of givine number =8dileep@dileep-Latitude-E7450:~/vinod$ ./a.out 
enter the any number: 677
sum of digits of givine number =20dileep@dileep-Latitude-E7450:~/vinod$ ./a.out 
enter the any number: 5679870786
sum of digits of givine number =41dileep@dileep-Latitude-E7450:~/vinod$ ./a.out 
enter the any number: 232354765576587687686564735336578
sum of digits of givine number =0dileep@dileep-Latitude-E7450:~/vinod$ 
