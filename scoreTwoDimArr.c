#include <stdio.h>

int main(void)
{
	int score[5][2];
	int total[2] = {0,}; // 1���� �迭 ��� �ε����� 0�� ����
	int i;
	
	// ���� ���� �迭 
	for(i = 0; i < 5; i++)
	{
		printf("%d�� �л��� ����, ���� ����: ", i+1);
		scanf("%d %d", &score[i][0], &score[i][1]);

	// �� ���� �迭
		total[0] += score[i][0];
		total[1] += score[i][1];
	} 
	
	printf("�������� ���: %d��, ���� ���� ���: %d��", total[0]/i, total[1]/i);	
	
	return 0;
}


