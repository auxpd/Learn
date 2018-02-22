#include <stdio.h>
#include <math.h> 
int main(void){
	int x, y, i, c, max, tempx, tempy;
	int num[81][81];
	while(scanf("%d %d", &x, &y) != EOF){
		for(i = 0; i < x; i++){
			for(c = 0; c < y; c++){
				scanf("%d", &num[i][c]);
			}
		}
		for(i = 0, max = 0; i < x; i++){
			for(c = 0; c < y; c++){
				if(fabs(num[i][c]) > fabs(max)){
					max = num[i][c];
					tempx = i;
					tempy = c;
				}
			}
		}
		printf("%d %d %d\n", tempx + 1, tempy + 1, num[tempx][tempy]);
	}
	return 0;
}
