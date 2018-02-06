#include <stdio.h>
#include <math.h> 

int main(void){
	double num, r;
	int a;
	while(scanf("%lf %d", &num, &a) != EOF){
		for(r = num; a > 1; a--){
			r += sqrt(num);
			num = sqrt(num);
		}
		printf("%.2lf\n", r);
	}
	return 0;
}
