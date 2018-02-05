#include <stdio.h>

int main(void){
	int a ,b ,i ,num;
	while(scanf("%d", &a) != EOF){
			for(i = 0, num = 1; i < a; i++){
				scanf("%d",&b);
				if(b % 2 == 1){
					num *= b;
				}
			}
		printf("%d\n", num);
	}

	return 0;
}
