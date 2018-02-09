#include <stdio.h>
#include <math.h>

int main(void){
	int x, n, flag, t;
	while(scanf("%d %d", &n, &x) != EOF){
		if(n == 0 && x == 0){
			return 0;
		}
			for(flag = 0; n <= x; n++){
				for(t = 2; t <= sqrt(n * n + n + 41); t++){
					if((n * n + n + 41) % t == 0){
						flag = 1;
						break;
					}
				}
				if(flag == 1)
					break;
			}
			if(flag == 0){
				printf("OK\n");
			}else
				printf("Sorry\n");
	}

	return 0;
}
