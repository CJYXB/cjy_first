#include<stdio.h>
int main() {
	float score=0;
	float score1=0;
	float score2=0;
	float score3=0;
	float sum=0;
	float mean=0;
	printf("�������������ųɼ�\n");
	printf("���� ��ѧ Ӣ�� ����\n");
	scanf("%f%f%f%f",&score,&score1,&score2,&score3);
	printf("����%.1f\n��ѧ%.1f\nӢ��%.1f\n����%.1f\n",score,score1,score2,score3);
	sum=score+score1+score2+score3;
	mean=sum/4;
	printf("�ܳɼ�=%.2f ƽ���ɼ�=%.2f",sum,mean);
	return 0;
}
