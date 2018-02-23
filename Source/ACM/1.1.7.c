#include <stdio.h>

int main(void){
	double a, b;
	while(scanf("%lf %lf", &a, &b) != EOF)
		printf("%.0lf\n\n", a + b);	
	return 0;
}
