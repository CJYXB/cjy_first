#include<stdio.h>
int main()
{
	//�ж��Ƿ�Ϊ����
	int input=0;
	printf("���������:>");
	scanf("%d",&input) ;
	if(input%4==0 && input%100!=0 || input%400==0){
		printf("������"); 
	}else{
		printf("��������"); 
	}
	return 0;
}
