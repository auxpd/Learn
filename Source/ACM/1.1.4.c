#include <stdio.h>

int main(void){
	int a;
	while(scanf("%d", &a) != EOF && a != 0){
		double sum = 0, temp;
		while(a--){
			scanf("%lf", &temp);
			sum += temp;
		}
		printf("%.0lf\n", sum);
	}
	return 0;
}
