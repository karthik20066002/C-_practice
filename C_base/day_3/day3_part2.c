#include <stdio.h>

int find_max(int,int,int);

int main(){
  int num1, num2, num3;
  printf("Enter the three numbers: ")
  scanf("%d %d %d",&num1,&num2,&num3);
  int answer=find_max(num1,num2,num3);
  printf("The largest number is: %d",answer);
  return 0;
}

int find_max
