#include <stdio.h>

int main(void){
	int a, i, m, n, temp;
	while(scanf("%d", &a) != EOF){
		scanf("%d", &m);
		for(i = temp = 1; i < a; i++){
			scanf("%d", &n);
			while((temp % n != 0) || (temp % m != 0))
				temp++;
			m = temp;
		}
		printf("%d\n", temp);
	}
	return 0;
}
