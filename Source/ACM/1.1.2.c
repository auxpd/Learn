#include <stdio.h>

int main(void){
	int n;
	double a, b;
	while(scanf("%d", &n) != EOF)
		while(n--){
			scanf("%lf %lf", &a, &b);
			printf("%.0lf\n", a + b);
		}
	return 0;
}
