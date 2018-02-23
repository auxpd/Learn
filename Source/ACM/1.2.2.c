#include <stdio.h>

int main(void){
	long a, b, temp;
	while(scanf("%ld %ld", &a, &b) != EOF && ( a != -1 || b != -1)){
		while((temp = a % b) != 0){
			a = b;
			b = temp;
		}
		 b > 1 ? printf("POOR Haha\n") : printf("YES\n");
	}
	return 0;
}
