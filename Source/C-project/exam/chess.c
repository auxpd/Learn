#include <stdio.h>

int main (void){
    int num[3][3] = {{0,0,0},{0,0,0},{0,0,0}};
    int x, y, to, tx, so, sx, flag = 1;
    while(1){
        for(int i = 0; i <= 2; i++){
            for(int j = 0; j <= 2; j++)
                printf("%d ", num[i][j]);
            printf("\n");
        }
        printf("\n");
        scanf("%d %d", &x, &y);
        if(flag == 1)
            if(num[x][y] != 0){
                printf("输入错误");
                continue;
            }
            num[x][y] = 1;
        else
            if(num[x][y] != 0){
                printf("输入错误");
                continue;
            }
            num[x][y] = 2;
        flag = -flag;
        
        for(int i = to = tx = so = sx = 0; i <= 2; i++){
            for(int j = 0; j <= 2; j++){
                if(num[i][j] == 1)
                    to++;
                if(num[i][j] == 2)
                    tx++;
                if(num[j][i] == 1)
                    so++;
                if(num[j][i] == 2)
                    sx++;
            }
            if(to == 3 || so == 3){
                printf("o获胜\n");
                getchar();
                getchar();
                return 0;
            }
            if(tx == 3 || sx == 3){
                printf("X获胜\n");
                getchar();
                getchar();
                return 0;
            }
        }
        to = tx = 0;
        if(num[0][0] == 1 && num[1][1] == 1 && num[2][2] == 1){
            printf("o获胜\n");
            getchar();
            return 0;
        }
        if(num[0][0] == 2 && num[1][1] == 2 && num[2][2] == 2){
            printf("X获胜\n");
            getchar();
            return 0;
        }
    }
    
}

