#include <stdio.h>
int main(){
	char character;
	printf("Enter a character ");
	scanf("%c", &character);
	if ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z') ){
		printf("%c Is an alphabet.", character);
		}else{
		if ((character >= '0' && character <= '9')){
			printf("%c Is a number.", character);
		}else{
			printf("%c Is a Special Character.", character);
		}
	}
	return 0;
}

