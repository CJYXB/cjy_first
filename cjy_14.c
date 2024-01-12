#include<stdio.h>
int main() {
	int i=0;
	int j=0;
	for(j=0; j<1; j++) {
		printf("\n");
	}
	for(i=0; i<4; i++) {
		for(j=0; j<5; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
