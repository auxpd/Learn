#include <stdio.h>

int main(void){
	int num, a, b, c, i;
	double t;
	while(scanf("%d", &num) != EOF){
		if(num == 0)break;
		for(i = 0, a = 0, b = 0, c = 0; i < num; i++){
			scanf("%lf", &t);
			if(t == 0){
				b++;
			}else
			if(t > 0){
				a++;
			}else
				c++;
		}
	printf("%d %d %d\n", c, b, a);
	while(getchar() != '\n');
	}
	return 0;
}
