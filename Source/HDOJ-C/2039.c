#include <stdio.h>

int main(void){
	double a, c[3], flag;
	while(scanf("%lf", &a) != EOF){
		while(a--){
			flag = 1;
			scanf("%lf %lf %lf", &c[0], &c[1], &c[2]);
			if(c[0] + c[1] <= c[2])
				flag = 0;
			if(c[1] + c[2] <= c[0])
				flag = 0;
			if(c[2] + c[0] <= c[1])
				flag = 0;
			if(flag == 0)
				printf("NO\n");
			else
				printf("YES\n");
		}
		while(getchar() != '\n');
	}
	return 0;
}
