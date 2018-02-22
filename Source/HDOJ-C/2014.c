#include <stdio.h>

int main(void){
	int a, b, t1, time;
	double t2, re, t3;
	double num[100];
	while(scanf("%d", &time) != EOF){
		for(t1 = 0; t1 < time; t1++)
			scanf("%lf",&num[t1]);
		for(a = 0; a < time - 1; a++){
			for(b = a + 1; b < time; b++){
				if(num[a] > num[b]){
					t2 = num[a];
					num[a] = num[b];
					num[b] = t2;
				}	
			}
		}
		for(re = 0, time -= 2, t3 = time; time > 0; time--){
			re += num[time];
		}
		printf("%.2lf\n", re/t3);
	}

	return 0;
}
