#include<stdio.h>
int main()
{
	//判断是否为闰年
	int input=0;
	printf("请输入年份:>");
	scanf("%d",&input) ;
	if(input%4==0 && input%100!=0 || input%400==0){
		printf("是闰年"); 
	}else{
		printf("不是闰年"); 
	}
	return 0;
}
