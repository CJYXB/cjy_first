#include<stdio.h>
int main()
{
	//��������
	int x=0;
	int y=0;
	int a=0;
	int b=0;
	int a1=0;
	int b1=0; 
	int c=0; 
	printf("������������λ����:>");
	scanf("%d%d",&x,&y);
	//��ȡX�ĸ�λ 
	a=x%10; //2
	//��ȡX��ʮλ
	b=x/10;//1
	//��ȡy�ĸ�λ 
	a1=y%10;//4
	//��ȡy��ʮλ
	b1=y/10;//3
	c=a1*1000+a*100+b1*10+b;
	printf("%d",c);
	return 0;
}
