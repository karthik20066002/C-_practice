/*Random Junk I am making. Let us C, indeed.*/
#include <stdio.h>

int main()
{
	int p, n;
	float r, si;

	printf("Give me the p, n ,r: ");
	scanf("%d %d %f", &p, &n, &r);

	si=(p * n * r) /100;
	printf("The value is %f", si);
	return 0;
}
