#include<stdio.h>
int main() {
	int i=1;
	int j=0;
	//ǰ����*�żӿո��ӡ
	for(i=1; i<=4; i++) {
		//��ӡ�ո�
		for(j=4-i; j>0; j--) {
			printf(" ");
		}
		//��ӡ*��
		for(j=0; j<2*i-1; j++) {
			printf("*");
		}
		printf("\n");
	}
	//ǰ3��*�żӿո��ӡ
	for(i=0; i<3; i++) {
		//�ո��ӡ
		for(j=0; j<i+1; j++) {
			printf(" ");
		}
		//*�Ŵ�ӡ
		for(j=0; j<2*(2-i)+1; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
