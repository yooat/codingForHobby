#include <stdio.h>
#define NUMBER 5
#include <limits.h>

int main(void)
{
	int i, max, min, index_max, index_min;
	int array[NUMBER];
	
	max = 0;
	min = INT_MAX;
	for(i = 0; i < NUMBER; i ++)
	{
		scanf("%d", &array[i]);
		if(max < array[i])
		{
			max = array[i];
			index_max = i;
		}
		
		if(min > array[i])
		{
			min = array[i];
			index_min = i;
		}
	}
	printf("���� ū ���� %d�Դϴ�. �׸��� %d��°�� �ֽ��ϴ�.\n", max, index_max + 1);
	printf("���� ����  ���� %d�Դϴ�. �׸��� %d��°�� �ֽ��ϴ�.\n", min, index_min + 1);

	return 0;
}




