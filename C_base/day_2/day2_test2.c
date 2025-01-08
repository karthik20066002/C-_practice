#include <stdio.h>


int main(){
  int number, revnum=0, temp;
  printf("Enter the number to be reversed: ");
  scanf("%d",&number);
  while (1){
    if (number >0){
      temp=number%10;
      number=number/10;
      revnum=((revnum*10)+(temp*10));

    }
    else {
      revnum=revnum/10;
      break;
    }
  }


  printf("The reversed number is: %d",revnum);
  return 0;






}
