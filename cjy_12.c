#include<stdio.h>
void UL() {
	printf("=============================\n\n");
	printf("\t   ���ʻ���\n");
	printf("\t1.��Ԫ�������\n");
	printf("\t2.����һ���Ԫ\n");
	printf("\t0.�˳�\n");
	printf("\n\n=============================\n");
}
int main() {
	int choose=0;
	float input=0;
	float money=0;
	do{
	UL();
	printf("��ѡ��:>");
	scanf("%d",&choose);
	switch (choose) {
		case 1:
			printf("��������:>"); 
			scanf("%f",&input);
			money=input*7.1463;
			printf("�����Ϊ:%.4f\n",money);
			break;
		case 2:
			printf("��������:>"); 
			scanf("%f",&input);
			money=input/7.1463;
			printf("��Ԫ:%.4f\n",money);
			break;
		default:
			printf("�������,����������\n");
	}
	}while(choose);
	return 0;
}
