// 2675번 - 문자열 반복

#include <stdio.h>
#include <string.h>

int main(void){
	char str[21] = {'\0',};
	int test_case;
	int repetition;
	
	scanf("%d", &test_case);
	
	for(int i = 0; i < test_case; i++){
		scanf("%d %s", &repetition, str);
		
		for(int j = 0; j < strlen(str); j++){
			for(int k = 0; k < repetition; k++){
				printf("%c", str[j]);
			}
		}
		printf("\n");
	}
	
	return 0;
}
