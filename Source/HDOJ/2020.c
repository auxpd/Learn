#include <stdio.h>
int main(void){
	int a, i, b, temp;
	int num[100], negative[100];
	while(scanf("%d", &a) != EOF && (a != 0)){
		for(i = 0; i < 100; i++)
			negative[i] = 1;
		for(i = 0; i < a; i++){
			scanf("%d", &num[i]);
			if(num[i] < 0){
				negative[i] = -1;
				num[i] = -num[i];
			}
		}
		for(i = 0; i < a; i++){
			for(b = i + 1; b < a; b++){
				if(num[i] > num[b]){
					temp = num[i];
					num[i] = num[b];
					num[b] = temp;
					temp = negative[i];
					negative[i] = negative[b];
					negative[b] = temp;
				}
			}
		}
		for(i = a - 1; i > 0; i--)
			printf("%d ", num[i] * negative[i]);
		printf("%d\n", num[i] * negative[i]);
	}

	return 0;
}
