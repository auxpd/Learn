#include <stdio.h>

int main(void){
	int a, num[100], i, flag;
	while(scanf("%d", &a) != EOF && (a != 0)){
		for(i = 0; i < a; i++)
			scanf("%d", &num[i]);
		for(i = 0, flag = 0; i < a; i++){
			if(num[i] >= 100){
				flag += num[i] / 100;
				num[i] %= 100;
			}
			if(num[i] >= 50 && num[i] < 100){
				num[i] %= 50;
				flag++;
			}
			if(num[i] >= 10 && num[i] < 50){
				flag += num[i] / 10;
				num[i] %= 10;
			}
			if(num[i] >= 5 && num[i] < 10){
				flag ++;
				num[i] %= 5;
			}
			if(num[i] >=2 && num[i] < 5){
				flag += num[i] / 2;
				num[i] %= 2;
			}
			flag += num[i];
		}
		printf("%d\n", flag);
	}
	return 0;
}
