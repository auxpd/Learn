#include <stdio.h>

int main(void){
    int a, b, i, j, t;
    int numA[100], numB[100];
    int hA[100];
    while(scanf("%d %d", &a, &b) != EOF && (a != 0 || b != 0)){
        int k = 0;
		//输入
        for(i = 0; i < a; i++)
            scanf("%d", &numA[i]);
        for(i = 0; i < b; i++)
            scanf("%d", &numB[i]);
        //处理
        for(i = 0; i < a; i++){
            for(j = t = 0; j < b; j++)
                if(numA[i] != numB[j])
                    t++;
            if (t == b)
                hA[k++] = numA[i];
        }
        //如果空集
        if(k == 0){
            printf("NULL\n");
            continue;;
        }
        //排序
        for(i = 0; i < k - 1; i++)
            for(j = i + 1; j < k; j++)
                if (hA[i] > hA[j]) {
                    t = hA[i];
                    hA[i] = hA[j];
                    hA[j] = t;
                }
        //打印
        for(i = 0; i < k; i++)
            printf("%d ", hA[i]);
        printf("\n");
    }
    return 0;
}
