#include <stdio.h>

int getDay(int month, int day)
{
	int i, sum = 0;
	for(i = 1; i < month; i++)
	{
		if(i == 2) // ���� ������ ���� 
		{
			sum += 28;
		}
		else if(i%2 == 0)
		{
			sum += 30;	
		}
		else
		{
			sum += 31;
		}
  	}
	return sum + day;
}

int main(void)
{
	int month, day;
	printf("�ް� ���� �Է��ϼ��� :");
	scanf("%d %d", &month, &day);
	printf("1�� 1�Ϻ��� �ش� ��¥������ �ϼ��� %d�� �Դϴ�.", getDay(month, day));
	return 0;
}


