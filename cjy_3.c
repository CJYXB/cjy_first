#include<stdio.h>
int main()
{
	//�ж��Ƿ�Ϊ����
	int x=0;
	printf("������һ����ֵ:>");
	scanf("%d",&x);
	if(x%2!=0){
		printf("����");
	}else{
		printf("ż��"); 
	}
	return 0;
}
