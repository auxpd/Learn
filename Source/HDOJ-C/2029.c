#include <stdio.h>
#include <string.h> 

int main(void){
	int a, i, len, b, flag, e;
	char c[1024];
	while(scanf("%d", &a) != EOF){
		for(i = 0; i < a; i++){
			scanf("%s", c);
			len = strlen(c);
			//第一个e 和最后一个b 判断
			for(e = flag = 0, b = len - 1; e <= len / 2; e++, b--){
				if(c[e] != c[b]){
					flag = 1;
					break;
				}
			}
			if(flag == 1)
				printf("no\n");
			else
				printf("yes\n");
		}
	}

	return 0;
}
