#include <stdio.h>

int main(void){
	int a, i;
	while(scanf("%d", &a) != EOF){
		long long int num[51] = {0, 3, 6, 6};
		for(i = 4; i <= a; i++)
			num[i] = num[i - 1] + 2 * num[i - 2];
		printf("%lld\n", num[a]);
	}
	return 0;
}
