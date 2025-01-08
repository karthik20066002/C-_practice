#include <stdio.h>

float area(float);
float perimeter(float);


int main(){
	float radius;
	printf("Input radius: ");
	scanf("%f",&radius);

	float ac_pem=perimeter(radius);
	float ac_area=area(radius);

	printf("Area is %.2f and perimeter is %.2f",ac_area,ac_pem);
	return 0;

}

float area(float x){
	return 3.14159*x*x;
}

float perimeter(float y){
	return 2*3.14159*y;
}

