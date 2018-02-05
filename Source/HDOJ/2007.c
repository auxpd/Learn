#include <stdio.h>

int main(void){
	long int n ,x ,t ,a ,b;
	while(scanf("%ld %ld" ,&n, &x) != EOF){
		if(n > x){
			t = n;
			n = x;
			x = t;
		}
		for(a = 0, b = 0; n <= x; n++){
			if(n % 2 == 0){
				a += (n * n);
			}else{
				b += (n * n * n);
			}
		}
		printf("%ld %ld\n", a, b);
	}

	return 0;
}
