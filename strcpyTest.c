#include <stdio.h>
#include <string.h>

int main(void)
{
    char input[20] = "I love you";
	char result[20] = "Love";
	strcpy(result, input);
	printf("���ڿ� ���� : %s\n", result);
	
	return 0;
}
