#include <stdio.h>
#include <math.h>

typedef struct node {
    float x;
    float y;
}node;

int main(){
    node a;
    node b;
    while(scanf("%f %f %f %f",&a.x ,&a.y ,&b.x ,&b.y) >= 0){
        printf("%.2f\n",sqrt(((a.x + b.x)*(a.x + b.x)) + ((a.y + b.y)*(a.y + b.y))));
    }
    return 0;
}

