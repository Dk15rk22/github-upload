#include <stdio.h>
int factorial(int number)
{
    if (number == 0)  
        return 1;  
    else if (number < 0)
        return -1;
    else
      return(number * factorial(number-1));
}

int main() {
  int num = 0, N = 0;
  scanf("%d",&N);
  for(int i = 0; i< N; i++)
  {
    scanf("%d", &num);
    printf("%d\n",factorial(num));
  }   
  return 0;
}