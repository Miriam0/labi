#include <stdio.h>
#include <cmath>

double formula_1(double x, double y){
	double a = sin(x) + cos(y);
	double b = cos(x) - sin(y);
	return (a / b) * tan(x*y);
}

double task_7(double x, double y){
	printf("Сумма: %u\n", x + y);
	printf("Разность: %u\n", x - y);
	printf("Частное: %u", x / y);
}

int main(){
	printf("%u", formula_1(1, 2));
	printf("%u", task_7(1, 2));
	return 0;
}
