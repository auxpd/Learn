#include  <stdio.h>

int main(){
	char a, b, c, t;
	while(scanf("%c%c%c",&a,&b,&c) > 0){
		if(a > b){
			t = a;
			a = b;
			b = t;
		}
		if(c < a){
			t = a;
			a = c;
			c = b;
			b = t;
		}
		if(c > a && c < b){
			t = b;
			b = c;
			c = t;
		}
		while(!(t = getchar()));
		printf("%c %c %c\n", a, b, c);
	}
	
	return 0;
}
