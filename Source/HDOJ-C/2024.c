#include <stdio.h>
int judge(char c, int o){
	if(o == 0){
		if(c == 95 || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
			return 1;
		else 
			return 0;
	}
	if(c == 95 || (c >= 65 && c <= 90) ||
		(c >= 97 && c <= 122) || (c >= 48 && c <= 57))
		return 1;
	return 0;
}

int main(void){
	int a, i, o, flag;
	char c[50];
	scanf("%d", &a);
	getchar();
	while(a--){
		gets(c);
		flag = 1;
		for(i = o = 0; c[i] != '\0'; i++){
			if(!judge(c[i], o)){
				flag = 0;
				break;
			}
			o = 1;
		}
		if(flag == 1)
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;
}
