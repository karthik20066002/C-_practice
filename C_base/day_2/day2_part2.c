#include <stdio.h>


int main()
{
  int n,i,sum_to_n=0;
  scanf("%d",&n);
  for (i=1;i<=n;i++) {
  sum_to_n+=i;
  }
  printf("%d\n",sum_to_n);



  return 0;
}
