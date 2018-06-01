#include <stdio.h>

int main(void){
	int a;
	long long temp[55] = {0, 1, 2};
	for(int i = 3; i < 55; i++){
		temp[i] = temp[i - 1] + temp[i - 2];
	}
	while(scanf("%d", &a) != EOF){
		printf("%lld\n", temp[a]);	
	}
	return 0;
}
