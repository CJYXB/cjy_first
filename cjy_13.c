#include<stdio.h>
int main()
{
	//�ж�ѧ���ɼ��ȼ� 
	int grade=0;
	printf("������ɼ�:>");
	scanf("%d",&grade);
	if(grade>90){
		printf("A");
	}else if(grade>=80 && grade<=90){
		printf("B");
	}else if(grade>=70 && grade<=79){
		printf("C");
	}else if(grade>=60 && grade<=69){
		printf("D");
	}else{
		printf("E");
	}
	return 0;
}
