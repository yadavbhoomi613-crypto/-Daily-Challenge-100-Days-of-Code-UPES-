#include <stdio.h>

int main() {
	char alphabet ;
	printf("write the alphabet\n");
	scanf("%c", &alphabet);
	if(alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u' || 
	alphabet == 'A' || alphabet == 'E' || alphabet == 'I' || alphabet == 'O' || alphabet == 'U'){
		printf("the alphabet is vowel");
	}
	else{
		printf("the alphabet is consonant");
	}
	return 0;
}
