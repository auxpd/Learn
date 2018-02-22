#include <stdio.h>

int main(void){
	int m, n, flag;
	while(scanf("%d %d", &m, &n) != EOF){
		for(flag = 0; m <= n; m++){
			if(( (m/100) * (m/100) * (m/100) +
				 (m%100/10) * (m%100/10) * (m%100/10) +
				 (m%10) * (m%10) * (m%10) 
				) == m){
				if(flag == 1){
					printf(" %d", m);
					continue;
				}
				flag = 1;
				printf("%d", m);
			}
		}
		if(flag == 1){
			printf("\n");
		}else
			printf("no\n");
	}

	return 0;
}
