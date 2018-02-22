#include <stdio.h>
#include <time.h> 
#define MOVETO(x,y) printf("\033[%d;%dH",(x), (y));		//坐标定位
#define CLEAR()	printf("\033[2J");						//屏幕清空

typedef struct node{	//定义坐标结构；
	int x;
	int y;
	struct node *next;
}node;

node *head, *food;	//定义头指针，食物指针；
node *q;			//定义遍历蛇身的指针；
int SnakeStatus = 1;//合法判断

void CreateMap(){	//绘制地图
	int i,j;
	for(i = 0; i < 26; i++){
		MOVETO(i,0);
		printf("□");
		MOVETO(i,26);
		printf("□");
	}
	for(j = 0; j < 26; j++){
		MOVETO(0,j);
		printf("□");
		MOVETO(26,j);
		printf("□");
	}
	for(i = 2; i < 26; i++){
		for(j = 0; j < 26; j++){
			MOVETO(i,j);
			printf("■");
		}
	}
}

void initsnake(){	//初始化蛇身

}

void CreateFood(){	//创建并随机食物

}

void BiteSelf(){	//判断咬到自己

}
void CrossWall(){	//判断撞墙

}

void SnakeMove(){	//蛇方向控制

}


int main(void){		//入口
	CLEAR();
	CreateMap();
	getchar();
	return 0;
}
