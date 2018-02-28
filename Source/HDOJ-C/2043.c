#include <stdio.h>
#include <string.h> 

int main(void){
	int a, flag, i;
	char c[1000]; 
	while(scanf("%d", &a) != EOF){
		while(a--){
			flag = 0;
			scanf("%s", c);
			int num[4] = { 0 };
			if (strlen(c) < 8 || strlen(c) >= 16){
				printf("NO\n");
				break;
			}
			for(i = 0; i < (int)strlen(c); i++){
				if(c[i] >= 65 && c[i] <=90){
					num[0] = 1;
					continue;
				}
				if(c[i] >= 97 && c[i] <= 122){
					num[1] = 1;
					continue;
				}
				if(c[i] >= 48 && c[i] <= 57){
					num[2] = 1;
					continue;
				}
				if(c[i] >= 32 && c[i] <= 126){
					num[3] = 1;
					continue;
				}
			}
			if(num[0] + num[1] + num[2] + num[3] >= 3)
				printf("YES\n");
			else
				printf("NO\n");
		}
	}
	return 0;
}
