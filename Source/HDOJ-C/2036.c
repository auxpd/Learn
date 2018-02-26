#include <stdio.h>

int main(void){
	int i, j, a[100], b[100];
	double r;
	while(scanf("%d", &j) != EOF && j != 0){
		for(i = 0; i < j; i++)
			scanf("%d %d", &a[i], &b[i]);
		for(i = r = 0; i < j - 1; i++)
			r += 0.5 * ((a[i] * b[i + 1]) - (a[i + 1] * b[i]));
		r += 0.5 * ((a[j - 1] * b[0]) - (a[0] * b[j - 1]));
		printf("%.1f\n", r);
	}
	return 0;
}
