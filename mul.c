#include<stdio.h>
int main()
{
	//九九乘法表 
	int i=0;
	int j=0;
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=i;j++)
		{
			//实现乘法表打印在效果中发现有些不能很好的对齐。
			//使用%-2d保存两个字符不够的向右补空格(相当于走对齐)。 
			printf("%dx%d=%-2d ",j,i,i*j);
		}
		printf("\n");
	 } 
	return 0;
} 

