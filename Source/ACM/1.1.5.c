#include <stdio.h>

int main(void){
	int a, i;
 	while(scanf("%d", &a) != EOF)
		while(a--){
			double temp, sum = 0; 
			scanf("%d", &i);
			while(i--){
				scanf("%lf", &temp);
				sum += temp;
			}
			printf("%.0lf\n", sum);
		}
	return 0;
}
