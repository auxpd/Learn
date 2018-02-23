#include <stdio.h>
#define P 3.1415927

int main(void){
	int n, i = 1;
	float d, time; 
	while(scanf("%f %d %f", &d, &n, &time) != EOF && n != 0){
		printf("Trip #%d: %.2f %.2f\n", i++, d / 63360 * 1.0 * n * P, 
								d / 63360 * 1.0 * n * P / time * 3600);
	}

	return 0;
}
