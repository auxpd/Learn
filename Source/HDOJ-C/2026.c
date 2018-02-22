#include <stdio.h>
#include <ctype.h> 

int main(void){
	int a;
	char c[100];
	while(gets(c) != NULL){
		for(a = 0; c[a] != '\0'; a++){
			if(a == 0)	//首字母
				if(c[0] >= 'a' && c[0] <= 'z')
					c[0] -= 32;

			if(c[a] == ' ')	
				if(c[a + 1] >= 'a' && c[a + 1] <= 'z'){
					c[a + 1] -= 32;
				}
		}
		for(a = 0; c[a] != '\0'; a++)	//打印全部字符
			printf("%c", c[a]);
		printf("\n");
	}
	return 0;
}
