#include <stdio.h>

int main(void){
	double a, b;
	while((scanf("%lf %lf", &a, &b) != EOF) && (a != 0 || b != 0))
		printf("%.0lf\n", a + b);
	return 0;
}
