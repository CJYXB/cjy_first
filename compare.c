#include<stdio.h>
int  compare(int a,int b){
	return a>b?a:b;
}
int main()
{
	int a=0;
	int b=0;
	int max=0;
	scanf("%d%d",&a,&b);
	max=compare(a,b);
	printf("%d",max);
	return 0;
 } 
