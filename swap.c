#include<stdio.h>
void swap(int a,int b){
	int tmp=0;
	tmp=a;
	a=b;
	b=tmp;
	printf("%d %d",a,b);
}
int main()
{
	int a=10;
	int b=20;
	//ʵ������������ 
		printf("%d %d\n",a,b);
	swap(a,b);
 } 
