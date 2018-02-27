#include <stdio.h>

int main(void){
	int a, m, n, i;
	double t, t1;
	while(scanf("%d", &a) != EOF){
		while(a--){
			scanf("%d %d", &m, &n);
			for(i = 2, t = 0; i <= m; i++)
				if((t1 = (m * 1.0 / i * 1.0)) == m / i)
					t += m / i;
			printf(t == n ? "YES\n" : "NO\n");
		}
	}
	return 0;
}
