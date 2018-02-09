#include <stdio.h>

int main(void){
	int a, num;
	while(scanf("%d", &a) != EOF){
		for(num = 1; a > 1; a--){
			num = (num + 1) * 2;
		}
		printf("%d\n", num);
	}

	return 0;
}
