#include<stdio.h>
int main()
{
	//判断学生成绩等级 
	int grade=0;
	printf("请输入成绩:>");
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
