#include <stdio.h>
#include <math.h>




int main()
{
  int temp, withdrawal_amt, op_100, op_50, op_10;
  scanf("%d",&withdrawal_amt);
  op_100=withdrawal_amt/100;
  temp=withdrawal_amt%100;
  op_50=temp/50;
  temp=temp%50;
  op_10=temp/10;
  printf("%d %d %d",op_100,op_50,op_10);
  return 0;





}
