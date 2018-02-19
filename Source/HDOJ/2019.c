#include <stdio.h>

int main(void){
	int a, b, i, c;
	int num[100];
	while(scanf("%d %d", &a, &b) != EOF && (a || b)){
		for(i = 0; i < a; i++)
			scanf("%d",&num[i]);
		for(i = 0; i < a; i++){
			if(b < num[i]){
				for(c = a; c > i - 1; c--)
					num[c] = num[c - 1];
				num[i] = b;
				break;
			}
		}
		for(i = 0; i < a; i++)
			printf("%d ", num[i]);
		printf("%d\n", num[a]);
	}
	return 0;
}
