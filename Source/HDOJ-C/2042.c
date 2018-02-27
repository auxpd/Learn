#include <stdio.h>

int main(void){
	int a, num, i, r;
	while(scanf("%d", &a) != EOF){
		while(a--){
			scanf("%d", &num);
			for(i = 0, r = 3; i < num; i++)
				r = (r - 1) * 2;
			printf("%d\n", r);
		}
	}
	return 0;
}
