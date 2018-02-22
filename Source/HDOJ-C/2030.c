#include <stdio.h>
#include <strings.h> 

int main(void){
	int a, i, flag, j, len;
	while(scanf("%d", &a) != EOF){
		while(getchar() != '\n');
		for(i = 0; i < a; i++){
			char c[1024];
			gets(c);
			len = strlen(c);
			for(j = flag = 0; j < len; j++)
				if(c[j] > 126 || c[j] < 32)
					flag++;
			printf("%d\n", (flag + 1) / 2);
		}
	}

	return 0;
}
