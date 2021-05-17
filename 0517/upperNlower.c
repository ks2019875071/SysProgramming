#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
	char c;


	while (1) {
		scanf("%c", &c);

		if (c == '0') break;
	
		else if (c >= 'A' && c <= 'Z')
			printf("입력한 %c의 소문자는 %c", c, c+32);
	
		else if (c >= 'a' && c <= 'z')
			printf("입력한 %c의 대문자는 %c", c, c-32);
	}
	exit(0);
}
