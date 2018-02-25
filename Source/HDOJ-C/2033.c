#include <stdio.h>

int main(void){
    int Ah, Am, As, Bh, Bm, Bs, a, flag;
    while(~scanf("%d", &a)){
        while(a--){
            flag = 0;
            scanf("%d %d %d %d %d %d", &Ah, &Am, &As, &Bh, &Bm, &Bs);
            if(As + Bs >= 60){
                As += Bs - 60;
                flag = 1;
            }else
                As += Bs;
            Am += flag;
            if(Am + Bm >= 60){
                Am += Bm - 60;
                flag = 1;
            }
            else{
                Am += Bm;
                flag = 0;
            }
            Ah += Bh + flag;
        printf("%d %d %d\n", Ah, Am, As);
        }
    }
    return 0;
}
