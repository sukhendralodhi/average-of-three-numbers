#include <stdio.h>

int main(void) {
  int num1,num2,num3;
  float average, sum;
  
  printf("Enter the numbers: ");
  scanf("%d%d%d",&num1,&num2,&num3);

  sum = num1+num2+num3;
  average = (sum/3.0);

  printf("%.2f",average);
  return 0;
}