#include<stdio.h>
#include<time.h>
void UL() {
	printf("\t猜数字游戏\n");
	printf("===================================\n");
	printf("1.start  0.end\n");//开始  结束
	printf("===================================\n");
}
int main() {
	//猜数字游戏
	int guesser=0;
	int choose=0;
	//随机函数使用
	srand(time(NULL));
	int number=rand()%100+1;
	while(1) {
		//猜数字界面
		UL();
		printf("请选择:>");
		scanf("%d",&choose);
		switch(choose) {
			case 1:
				//猜数字实现
				while(1) {
					printf("请输入猜测数据(1-100):>");
					scanf("%d",&guesser);
					if(guesser>number) {
						printf("猜大了\n");
					} else if(guesser<number) {
						printf("猜小了\n");
					} else {
						printf("猜对了\n");
						break;
					}
				}
				break;
			case 0:
				break;
			
		}
		//用于跳出最外层的while循环
		if(0==choose) {
			break;
		}
	}
	return 0;
}
