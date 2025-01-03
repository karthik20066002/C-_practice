#include <stdio.h>
#include <math.h>

int main(){
  int year;
  scanf("%d", &year);
  int dayval=((year-1900)*365)+((year-1900)/4);
  int temp=dayval%7;
  if (temp==0)
    printf("It is Monday.");
  else if (temp==1)
    printf("It is Tuesday.");
  else if (temp==2)
    printf("It is Wednesday.");
  else if (temp==3)
    printf("It is Thursday.");
  else if (temp==4)
    printf("It is Friday.");
  else if (temp==5)
    printf("It is Saturday.");
  else
    printf("It is a Sunday");
}
