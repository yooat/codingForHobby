#include <stdio.h>

int main(void)
{
	char input[1001];
	gets(input);
	int count = 0;
	while(input[count] != '\0')
	{
		count++;
	}
	printf("�Է��� ���ڿ��� ����: %d\n", count);
	printf("�Է��� ���ڿ�: %s", input);
	return 0;	
}
