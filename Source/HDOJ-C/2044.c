#include <stdio.h>

int main(void){
	int a, m, n, i;
	long long num[50];
	num[0] = 1, num[1] = 2;
	while(scanf("%d", &a) != EOF){
		while(a--){
			scanf("%d %d", &n, &m);
			for(i = 2; i < m - n; i++)
				num[i] = num[i - 1] + num[i - 2];
			printf("%lld\n", num[m - n - 1]);
		}
	}
	return 0;
}
