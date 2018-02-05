#include <stdio.h>

#define PI 3.1415927

int main(void){
	double a ;
	while(scanf("%lf",&a) != EOF){
		printf("%.3lf\n",(4.0/3.0) * PI * a * a * a);
		while(getchar() != '\n');
	}
	return 0;
}
