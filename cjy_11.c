#include<stdio.h>
int main() {
	float score=0;
	float score1=0;
	float score2=0;
	float score3=0;
	float sum=0;
	float mean=0;
	printf("请依次输入四门成绩\n");
	printf("语文 数学 英语 物理\n");
	scanf("%f%f%f%f",&score,&score1,&score2,&score3);
	printf("语文%.1f\n数学%.1f\n英语%.1f\n物理%.1f\n",score,score1,score2,score3);
	sum=score+score1+score2+score3;
	mean=sum/4;
	printf("总成绩=%.2f 平均成绩=%.2f",sum,mean);
	return 0;
}
