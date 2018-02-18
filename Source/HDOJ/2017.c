#include <stdio.h>

int main(void){
	int a, i, flag;
	char c;
	while(scanf("%d", &a) != EOF){
		while(getchar() != '\n');
		for(i = 0; i < a; i++){
			flag = 0;
			while(scanf("%c", &c), c != '\n')
				if(c >= 48 && c <= 57)
					flag++;
			printf("%d\n", flag);
		}
	}
	return 0;
}
