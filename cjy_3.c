#include<stdio.h>
int main()
{
	//判断是否为奇数
	int x=0;
	printf("请输入一个数值:>");
	scanf("%d",&x);
	if(x%2!=0){
		printf("奇数");
	}else{
		printf("偶数"); 
	}
	return 0;
}
