#include <stdio.h>

// �ݺ��Լ��� �̿��ؼ� ���� �Ƕ�̵带 ����մϴ�. 
int print(int a)
{
	int i, j;
	for(i = 0; i < a; i++)
	{
		for(j = 0; j <= i; j++)
		{
			printf("%d ", j+1);
		}
		printf("\n");
	}
}


int main(void)
{
	int a;
	printf("���ڸ� �Է��ϼ���: ");
	scanf("%d", &a);
	print(a);
	return 0;
	
}
