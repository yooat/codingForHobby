#include <stdio.h>

//  ���� ����
int hour;
int minute;
int minuteAdd;

void count()
{
	minute += minuteAdd;
	hour += minute/60;
	minute %= 60;
	hour %= 24;
}
 
int main(void)
{
	
	printf("�ø� �Է��ϼ��� : ");
	scanf("%d", &hour);
	printf("���� �Է��ϼ���: ");
	scanf("%d", &minute);
	printf("���� ���� �Է��ϼ��� : ");
	scanf("%d", &minuteAdd);
	count();
	
	printf("��� ����� %d�� %d�� �Դϴ�.\n", hour, minute);
	return 0;
}
