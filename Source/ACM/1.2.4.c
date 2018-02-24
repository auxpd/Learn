#include<stdio.h>

int main()
{
    int n, m, j, a, b;
    long long int sum = 1;
    while(~scanf("%d", &n))
    {
        while(n--){
            scanf("%d", &m);
            b = m % 20;
            if(b == 0)
                b = 10;
            a = 1;
            for(j = 0; j < b; j++){
                sum = a * b;
                a = sum % 10;
            }
            printf("%d\n", a);
        }
    }
    return 0;
}

