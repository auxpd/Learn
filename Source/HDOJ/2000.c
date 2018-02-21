#include  <stdio.h>

int main(){
	char a, b, c, t;
	while(scanf("%c%c%c",&a,&b,&c) > 0){
		if(a > b){	//对比a和b，并交换
			t = a;
			a = b;
			b = t;
		}
		if(c < a){	//对比c和a，并交换
			t = a;
			a = c;
			c = b;
			b = t;
		}
		if(c > a && c < b){	//确定c位置
			t = b;
			b = c;
			c = t;
		}
		while(!(t = getchar()));
		printf("%c %c %c\n", a, b, c);
	}
	
	return 0;
}
