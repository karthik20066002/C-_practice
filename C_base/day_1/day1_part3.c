#include <stdio.h>
#include <math.h>





int main() {
	double sal;
	printf("Enter the salary: ");
	scanf("%lf",&sal);
	double rent=0.4, allow=0.2;
	double gross_salary=(1-(rent+allow))*sal;
	printf("The actual salary is: %lf",gross_salary);
	return 0;
	
	





}
