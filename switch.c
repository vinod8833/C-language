#include<stdio.h>
int main()
{
char operator;
float num1,num2,result=0;
	printf("enter the operator (+,-,*,/) :");
	scanf("%c",&operator);
printf("enter the value of two operators : num1 and num2 :");
	scanf("%f%f",&num1, &num2);
switch(operator)
{
	case '+':
	result=num1+num2;
	break;
	case '-':
	result=num1-num2;
	break;
	case '*':
	result=num1*num2;
	break;
	case '/':
	result=num1/num2;
	break;
	
	default:
	printf("\n you have enetered an invalid operator ");
}

printf("the result of %.2f %c %.2f = %.2F",num1,operator,num2,result);
return 0;
}


out put:-
enter the operator (+,-,*,/) :=
enter the value of two operators : num1 and num2 :45
56

 you have enetered an invalid operator the result of 45.00 = 56.00 = 0.00dileep@dileep-Latitude-E7450:~/vinod$ ./a.out 
enter the operator (+,-,*,/) :+
enter the value of two operators : num1 and num2 :67
89
the result of 67.00 + 89.00 = 156.00dileep@dileep-Latitude-E7450:~/vinod$ ./a.out 
enter the operator (+,-,*,/) :-
enter the value of two operators : num1 and num2 :80
90
the result of 80.00 - 90.00 = -10.00dileep@dileep-Latitude-E7450:~/vinod$ ./a.out 
enter the operator (+,-,*,/) :80
enter the value of two operators : num1 and num2 :5^[[A

 you have enetered an invalid operator the result of 0.00 8 5.00 = 0.00dileep@dileep-Latitude-E7450:~/vinod$ ./a.out 
enter the operator (+,-,*,/) :*
enter the value of two operators : num1 and num2 :80
5
the result of 80.00 * 5.00 = 400.00dileep@dileep-Latitude-E7450:~/vinod$ ./a.out 
enter the operator (+,-,*,/) :/
enter the value of two operators : num1 and num2 :80
5
the result of 80.00 / 5.00 = 16.00dileep@dileep-Latitude-E7450:~/vinod$ 
