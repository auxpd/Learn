#include <stdio.h>

int main(void){
	int y, m, d, flag;
	int month[12] = {
	31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
	};
	while(scanf("%d/%d/%d", &y, &m, &d) != EOF){
		if(m > 1){
			for(flag = 0; m > 1; m--){
				flag += month[m-2];
				}
			if((y % 4 == 0 && y % 100 != 0 && flag >= 59) ||
				(y % 400 == 0 && flag >= 59))		
			{
				flag += 1;
			}
		}
		else
			flag = 0;
		printf("%d\n",flag + d);
	}
	return 0;
}
