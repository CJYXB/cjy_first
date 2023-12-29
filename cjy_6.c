#include<stdio.h>
int main()
{
	//判断能否构成三角形 
	int a=0;
	int b=0;
	int c=0;
	printf("请输入三条边:>"); 
	scanf("%d%d%d",&a,&b,&c);
	if(a+b>c && a+c>b && c+b>a){
		printf("可以组成三角形"); 
	}else{
		printf("不可以组成三角形"); 
	}
	return 0;
}
