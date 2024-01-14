#include<stdio.h>
int main() {
	int i=1;
	int j=0;
	//前四行*号加空格打印
	for(i=1; i<=4; i++) {
		//打印空格
		for(j=4-i; j>0; j--) {
			printf(" ");
		}
		//打印*号
		for(j=0; j<2*i-1; j++) {
			printf("*");
		}
		printf("\n");
	}
	//前3行*号加空格打印
	for(i=0; i<3; i++) {
		//空格打印
		for(j=0; j<i+1; j++) {
			printf(" ");
		}
		//*号打印
		for(j=0; j<2*(2-i)+1; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
