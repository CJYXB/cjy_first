#include<stdio.h>
#include<time.h>
void UL() {
	printf("\t��������Ϸ\n");
	printf("===================================\n");
	printf("1.start  0.end\n");//��ʼ  ����
	printf("===================================\n");
}
int main() {
	//��������Ϸ
	int guesser=0;
	int choose=0;
	//�������ʹ��
	srand(time(NULL));
	int number=rand()%100+1;
	while(1) {
		//�����ֽ���
		UL();
		printf("��ѡ��:>");
		scanf("%d",&choose);
		switch(choose) {
			case 1:
				//������ʵ��
				while(1) {
					printf("������²�����(1-100):>");
					scanf("%d",&guesser);
					if(guesser>number) {
						printf("�´���\n");
					} else if(guesser<number) {
						printf("��С��\n");
					} else {
						printf("�¶���\n");
						break;
					}
				}
				break;
			case 0:
				break;
			
		}
		//��������������whileѭ��
		if(0==choose) {
			break;
		}
	}
	return 0;
}
