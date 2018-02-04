#include <stdio.h>
#include <math.h>

int main(){
	double num;
	while(scanf("%lf",&num) != EOF){
		printf("%.2lf\n",fabs(num));
	}	
	return 0;
}
