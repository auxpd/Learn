#include <stdio.h>

int main(void){
	int a, i, b, c, flag, temp;
	int num[100];
	while(scanf("%d", &a) != EOF){
		if(a == 0)
			break;
		for(i = 0; i < a; i++)
			scanf("%d",&num[i]);
		for(b = 0; b < a; b++){
			flag = 1;
			for(c = 0; c < a; c++){
				if(c == b)
					continue;
				if(num[b] > num[c]){
					flag = 0;
					break;
				}
			}
			if(flag == 1)
				break;
		}
		temp = num[b];
		num[b] = num[0];
		num[0] = temp;
		for(i = 0; i < a - 1; i++)
			printf("%d ", num[i]);
		printf("%d\n", num[a - 1]);
	}
	return 0;
}	
