#include <stdio.h>

int main(void){
	int a = 12;
	double ave = 0, temp;
	while(a--){
		scanf("%lf", &temp);
		ave += temp;
	}
	printf("$%.2lf\n", ave / 12.0);

	return 0;
}
