#include <stdio.h>
int main() {

int num1 = 10;
int num2 = 20;

   int sum = num1 + num2;
   int difference = num1 - num2;
   int product = num1 * num2;
   float quotient = num1 / num2;
   
  printf("The sum of %d and %d is: %d\n", num1, num2, sum);
     printf("The difference of %d and %d is: %d\n", num1, num2, difference);
    printf("The product of %d and %d is: %d\n", num1, num2, product);
    printf("The quotient of %d and %d is: %.2f\n", num1, num2, quotient);
  
    
   
  return 0;
}
