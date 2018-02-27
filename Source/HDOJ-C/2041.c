#include <stdio.h>

int steps(int i){
	if(i < 5)
		return i -1;
	return steps(i - 1) + steps(i - 2);
}

int main(void){
	int a, n;
	while(scanf("%d", &a) != EOF){
		while(a--){
			scanf("%d", &n);
			printf("%d\n", steps(n));
		}
	}
	return 0;
}
