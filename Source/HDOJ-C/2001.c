#include <stdio.h>
#include <math.h>

typedef struct node { //做xy坐标结构
    float x;
    float y;
}node;

int main(){
    node a;		//a点
    node b;		//b点
    while(scanf("%f %f %f %f",&a.x ,&a.y ,&b.x ,&b.y) >= 0){
        printf("%.2f\n",sqrt(((a.x - b.x)*(a.x - b.x)) 
					+ ((a.y - b.y)*(a.y - b.y))));	//平方根函数 
    }
    return 0;
}

