#include <stdio.h>

int main(void){
	int a, i;
	int num[55];
	while(scanf("%d", &a) != EOF){
		if(a == 0)
			break;
		for(i = 1; i <= 4; i++)
			num[i-1] = i;
		if(a <= 4){
			printf("%d\n", num[a - 1]);
			continue;
		}else{
			for(i = 4; i < a; i++)
				num[i] = num[i - 1] + num[i - 3];
			printf("%d\n", num[a - 1]);
			}
	}

	return 0;
}
