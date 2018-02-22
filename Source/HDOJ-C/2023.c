#include <stdio.h>

int main(void){
    int a, b, x, y, p, flag;
    double num[50][5], ave;
    double aves[5];
    while(scanf("%d %d", &a, &b) != EOF){    //输入成绩
        for(x = 0; x < a; x++)
            for(y = 0; y < b; y++)
                scanf("%lf", &num[x][y]);

        for(x = 0; x < a; x++){   //学生平均成绩
            for(y = ave = 0; y < b; y++)
                ave += num[x][y];
            printf("%.2lf", ave / (double)b);
			if(x != a - 1)
				printf(" ");
        }
		printf("\n");

        for(y = 0; y < b; y++){        //课程平均成绩
            for(x = ave = 0; x < a; x++)
                ave += num[x][y];
            aves[y] = ave / (double)a;
            printf("%.2lf", aves[y]);
			if(y != b - 1)
				printf(" ");
        }
		printf("\n");

        for(x = p = 0; x < a; x++){    //各科成绩均大于平均成绩的学生数量
            for(y = flag = 0; y < b; y++)
                if(num[x][y] < aves[y])
                    flag = 1;
            if(flag == 0)
                p++;
        }
        printf("%d\n\n", p);
    }
    return 0;
}
