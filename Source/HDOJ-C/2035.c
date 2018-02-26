#include <stdio.h>

int main(void){
	int a, b, t;
	while(scanf("%d %d", &a, &b) != EOF && (a != 0 || b!= 0)){
		t = 1;
		while(b--){
			t *= a;
			if(t >= 1000)
				t %= 1000;
		}
		printf("%d\n", t);
	}
	return 0;
}
