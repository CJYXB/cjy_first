#include<stdio.h>
int main() {
	//ÅĞ¶ÏÊäÈëÊÇ·ñÎªÊı×Ö ×ÖÄ¸ ·ûºÅ
	char input = '0';
	printf("ÇëÊäÈë:>");
	scanf("%c", &input);
	if (input >= 'a' && input <= 'z') {
		printf("Ğ¡Ğ´Ó¢ÎÄ×ÖÄ¸");
	} else if (input >= 'A' && input <= 'Z') {
		printf("´óĞ´Ó¢ÎÄ×ÖÄ¸");
	} else if (input >= '0' && input <= '9') {
		printf("Êı×Ö");
	}
	return 0;
}
