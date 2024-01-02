#include<stdio.h>
int main()
{
	//分离重组
	int x=0;
	int y=0;
	int a=0;
	int b=0;
	int a1=0;
	int b1=0; 
	int c=0; 
	printf("请输入两个两位整数:>");
	scanf("%d%d",&x,&y);
	//获取X的个位 
	a=x%10; //2
	//获取X的十位
	b=x/10;//1
	//获取y的个位 
	a1=y%10;//4
	//获取y的十位
	b1=y/10;//3
	c=a1*1000+a*100+b1*10+b;
	printf("%d",c);
	return 0;
}
