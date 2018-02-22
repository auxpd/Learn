#include <stdio.h>

int main(void){
	int time, ave, num[100], i, b, c, temp;
	while(scanf("%d %d", &time, &ave) != EOF){
		for(i = 0; i < time; i++)
			num[i] = 2 * (i + 1);
		for(c = time / ave, i = 0; c > 0; c--){
			for(b = 0, temp = 0; b < ave; b++)
				temp += num[i++];
			printf("%d", temp / ave);
			if(i !=  time)
				printf(" ");
		}
		if(time % ave != 0){
			for(c = time % ave, temp = 0; c > 0; c--)
				temp += num[i++];
			printf("%d", temp / (time % ave));
		}
		printf("\n");
	}
	return 0;
}
