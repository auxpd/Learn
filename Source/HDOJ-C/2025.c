#include <stdio.h>

int main(void){
	int i;
	char max;
	char c[100];
	while(scanf("%s", c) != EOF){
		for(i = max = 0; c[i] != '\0'; i++)
			if(c[i] >= max)
				max = c[i];
		for(i = 0; c[i] != '\0'; i++){
			printf("%c", c[i]);
			if(c[i] == max)
				printf("(max)");
		}
		printf("\n");
	}

	return 0;
}
