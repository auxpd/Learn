#include <stdio.h>

int main(void){
	int a, t;
	while(scanf("%d", &a) != EOF){
		while(a--){
			scanf("%d", &t);
			double temp, sum = 0;
			while(t--){	
				scanf("%lf", &temp);
				sum += temp;
			}
			printf("%.0lf\n", sum);
			if(a != 0)
				printf("\n");
		}
	}
	return 0;
}
