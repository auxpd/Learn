#include <stdio.h>

int main(void){
	int a, num, i;
	while(scanf("%d %d", &num, &a) != EOF){
		int result[1024] = { 0 };
		if(num < 0){	//负数处理
			printf("-");
			num = -num;
		}
		for(i = 0; num; i++){	//分割&处理
			result[i] = num % a;
			num /= a;
		}
		for(i--; i >= 0; i--)	//打印
			if(result[i] < 10)
				printf("%d", result[i]);
			else
				printf("%c", 'A' - 10 + result[i]);
		printf("\n");
	}
	return 0;
}
