#include<stdio.h>
void UL() {
	printf("=============================\n\n");
	printf("\t   汇率换算\n");
	printf("\t1.美元换人民币\n");
	printf("\t2.人民币换美元\n");
	printf("\t0.退出\n");
	printf("\n\n=============================\n");
}
int main() {
	int choose=0;
	float input=0;
	float money=0;
	do{
	UL();
	printf("请选择:>");
	scanf("%d",&choose);
	switch (choose) {
		case 1:
			printf("请输入金额:>"); 
			scanf("%f",&input);
			money=input*7.1463;
			printf("人民币为:%.4f\n",money);
			break;
		case 2:
			printf("请输入金额:>"); 
			scanf("%f",&input);
			money=input/7.1463;
			printf("美元:%.4f\n",money);
			break;
		default:
			printf("输入错误,请重新输入\n");
	}
	}while(choose);
	return 0;
}
