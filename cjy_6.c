#include<stdio.h>
int main()
{
	//�ж��ܷ񹹳������� 
	int a=0;
	int b=0;
	int c=0;
	printf("������������:>"); 
	scanf("%d%d%d",&a,&b,&c);
	if(a+b>c && a+c>b && c+b>a){
		printf("�������������"); 
	}else{
		printf("���������������"); 
	}
	return 0;
}
