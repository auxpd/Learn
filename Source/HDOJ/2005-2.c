#include <stdio.h>

int main(void){
	int y, m, d, i, flag ;
	int mouth[12] = {
	31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
	};
	while(scanf("%d/%d/%d", &y, &m, &d) != EOF){
		for(i = 0, flag = 0; i < m - 1 ; i++){
			flag += mouth[i];
		}
		if(((y % 4 == 0 && y % 100 != 0) || y % 400 ==0) && i >= 2){
			flag += 1;
		}
		printf("%d\n", flag + d);
	}
	return 0;
}
