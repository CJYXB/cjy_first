#include<stdio.h>
int main()
{
	//�žų˷��� 
	int i=0;
	int j=0;
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=i;j++)
		{
			//ʵ�ֳ˷����ӡ��Ч���з�����Щ���ܺܺõĶ��롣
			//ʹ��%-2d���������ַ����������Ҳ��ո�(�൱���߶���)�� 
			printf("%dx%d=%-2d ",j,i,i*j);
		}
		printf("\n");
	 } 
	return 0;
} 

