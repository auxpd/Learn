#include <stdio.h>

int main(void){
	int a;
	while(scanf("%d", &a) != EOF){
		double temp, sum = 0;
		while(a--){
			scanf("%lf", &temp);
			sum += temp;
		}
		printf("%.0lf\n", sum);
	}
	return 0;
}
