#include <stdio.h>

int main(void){
	int a, i, b;
	char c[100];
	while(scanf("%d", &a) != EOF){
		while(getchar() != '\n');
		for(i = 0; i < a; i++){
			int time[5] = { 0 };
			gets(c);
			for(b = 0; c[b] != '\0'; b++){
				switch(c[b]){
				case 'a':
					time[0] ++;
					break;
				case 'e':
					time[1] ++;
					break;
				case 'i':
					time[2] ++;
					break;
				case 'o':
					time[3] ++;
					break;
				case 'u':
					time[4] ++;
					break;
				default:
					break;
				}
			}
				printf("a:%d\ne:%d\ni:%d\no:%d\nu:%d",
						time[0], time[1], time[2], time[3], time[4]);
				if(i != a - 1)
					printf("\n");
				printf("\n");
		}

	}

	return 0;
}
