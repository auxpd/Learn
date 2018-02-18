#include <stdio.h>

int result(int a){
	if(a <= 1)
		return 1;
	return result(a - 1) + result(a - 3);
}

int main(void){
	int a;
	while(scanf("%d", &a) != EOF){
		if(a == 0)
			break;
		printf("%d\n", result(a));	
	}
	return 0;
}
