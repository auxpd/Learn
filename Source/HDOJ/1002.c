#include <stdio.h>
#include <string.h> 

int main(void){
	int a, i, len1, len2, sum, u;
	char tnum1[1000], tnum2[1000];
	while(scanf("%d", &a) != EOF){
		for(i = 0; i < a; i++){
			int num1[1000], num2[1000];
			scanf("%s %s", tnum1, tnum2);
			len1 = strlen(tnum1);	
			len2 = strlen(tnum2);
			int flag = 0, t, diff = 0;
			flag = len1 > len2 ? 1 : -1;	//标记需要补位的len
			diff = len1 > len2 ? (len1 - len2) : (len2 - len1);//差位数

			//补位并转到int num；
			for(u = t = 0; u < len1; u++, t++){
				if(flag == -1)
					for(t = flag = 0; t < diff; t++)
						num1[t] = 0;
				num1[t] = tnum1[u] - '0';
			}
			for(u = t = 0; u < len2; u++, t++){
				if(flag == 1)
					for(t = flag = 0; t < diff; t++)
						num2[t] = 0;
				num2[t] = tnum2[u] - '0';
			}

			//补位完成标记
			len1 = len2 = len1 > len2 ? len1 : len2;

			//计算
			for(u = len1 - 1; u > 0; u--){
				sum = num1[u] + num2[u];
				if(sum >= 10){
					num1[u] = sum - 10;
					num1[u - 1] += 1;
				}else
					num1[u] += num2[u];  
			}
			
			//输出
			printf("Case %d:\n%s + %s = ", i + 1, tnum1, tnum2);
			sum = num1[0] + num2[0];
			if(sum >= 10){
				num1[0] = sum - 10;
				printf("1");	//进位
			}else
				num1[0] += num2[0];
			for(u = 0; u < len1; u++)
				printf("%d", num1[u]);
			printf("\n");
			if(i != a - 1)
				printf("\n");
		}
	}
	return 0;
}	
