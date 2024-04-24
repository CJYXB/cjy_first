#include<stdio.h>
int main() {
	int i=0;
	int sum=0;
	int j=0;
	for(i=0; i<=50; i++) {
		j=2*i+1; 
		sum=sum+j;
	}
	printf("%d",sum);
	return 0;
}

