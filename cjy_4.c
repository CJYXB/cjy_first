#include<stdio.h>
int main() {
	//�ж������Ƿ�Ϊ���� ��ĸ ����
	char input = '0';
	printf("������:>");
	scanf("%c", &input);
	if (input >= 'a' && input <= 'z') {
		printf("СдӢ����ĸ");
	} else if (input >= 'A' && input <= 'Z') {
		printf("��дӢ����ĸ");
	} else if (input >= '0' && input <= '9') {
		printf("����");
	}
	return 0;
}
