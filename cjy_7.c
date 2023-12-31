#include<stdio.h>
int main()
{
	int a=10;
	int b=20;
	int tmp=0;
	printf("交换前\n");
	printf("a=%d b=%d\n",a,b);
	tmp=a;
	a=b;
	b=tmp;
	printf("交换后\n");
	printf("a=%d b=%d",a,b);
	return 0; 
}
