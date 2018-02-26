#include <stdio.h>

int main(void){
	int a, num[100][2], i, j, t, r;
	while(scanf("%d", &a) != EOF && a){
		for(i = 0; i < a; i++)
			scanf("%d %d", &num[i][0], &num[i][1]);
		for(i = 0; i < a - 1; i++)
			for(j = i + 1; j < a; j++)
				if(num[i][1] > num[j][1]){
					t = num[j][1];
					num[j][1] = num[i][1];
					num[i][1] = t;
					t = num[j][0];
					num[j][0] = num[i][0];
					num[i][0] = t;
				}

		t = num[0][1];
		for(i = r = 1; i < a; i++)
			if(num[i][0] >= t){
				t = num[i][1];
				r++;
			}
		printf("%d\n", r);
	}
	return 0;
}
