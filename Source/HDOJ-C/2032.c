#include <stdio.h>

int main(void){
	int a, i, j, num[30][30];
	while(scanf("%d", &a) != EOF){
		for(i = 0; i < a; i++){
			num[i][0] = 1;
			num[i][i] = 1;
		}
		for(i = 2; i < a; i++)
			for(j = 1; j < i; j++)
				num[i][j] = num[i - 1][j - 1] + num[i - 1][j];
		for(i = 0; i < a; i++){
			for(j = 0; j < i; j++)
				printf("%d ", num[i][j]);
			if(j == i || (j == 0 && i == 0))
				printf("1\n");
		}
		printf("\n");
	}
	return 0;
}
