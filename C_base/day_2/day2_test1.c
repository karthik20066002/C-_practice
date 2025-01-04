#include <stdio.h>


int main()
{
  int side1, side2, side3;
  scanf("%d %d %d",&side1,&side2,&side3);
  if ((side1+side2>side3) && (side2+side3>side1) && (side3+side1>side2))
  {
    printf("The sides can form a triangle.");
    if (side1==side2 && side2==side3)
      printf("The triangle is Equilateral.");
    else if (side1==side2 || side2==side3 || side1==side3)
        printf("The triangle is Isosceles.");
    else
      printf("The triangle is Scalar.");
  }

  else
    printf("The sides cannot form a triangle.");
  return 0;
}

/*Note to self: Remember that logical operators are different here! Other then that, I guess it's okay*/
/*Note to self: Only one set of brackets are required for the if condition!! Do not be stupid!*/
