#include <stdio.h>

int main(void){
	int a, b, t, flag;
	double num;
	while(scanf("%d", &a) != EOF){
		while(a--){
			scanf("%d", &b);
			for(num = 1, flag = -1, t = 2; b > 1; b--, t++){
					num += 1.0 / t * flag;
					flag = -flag;
			}
			printf("%.2lf\n", num);
		}
	}
	return 0;
}
