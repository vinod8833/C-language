

#include <stdio.h>
  
int main(){

   int num;

   printf("Number of terms to print in a Fibonacci series");
   scanf("%d", &num);

   for(int i = 0; i < num; i++) 
   {
       printf(" %d ", fibonacci(i));
   }

    return 0;
}
