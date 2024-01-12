#include<stdio.h>
int main()
{
	int i=0;
	for(i=0;i<4;i++){
		int j=0;
		for(j=0;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
