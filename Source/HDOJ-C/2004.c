#include <stdio.h>

int main(void){
	int a ;
	while(scanf("%d",&a) != EOF){
		if(a > 100 || a < 0){
			printf("Score is error!\n");
			continue;	
		}
		switch(a/10){
			case 10:
			case 9: printf("A\n");	break;
			case 8: printf("B\n");	break;
			case 7: printf("C\n");	break;
			case 6:	printf("D\n");	break;
			default:
					printf("E\n");	break;
		}				
	}
	return 0;
}
