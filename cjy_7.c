#include<stdio.h>
int main()
{
	int a=10;
	int b=20;
	int tmp=0;
	printf("����ǰ\n");
	printf("a=%d b=%d\n",a,b);
	tmp=a;
	a=b;
	b=tmp;
	printf("������\n");
	printf("a=%d b=%d",a,b);
	return 0; 
}
