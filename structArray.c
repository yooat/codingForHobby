#include <stdio.h>
#define SIZE 5

struct student {
	int number;
	char name[20];
	double grade;
};

int main(void)
{
	struct student std_list[SIZE];
	int i;
	
	for(i = 0; i < SIZE; i++)
	{
		printf("�й��� �Է��ϼ���: ");
		scanf("%d", &std_list[i].number);
		printf("�̸��� �Է��ϼ���: ");
		scanf("%s", &std_list[i].name);
		printf("������ �Է��ϼ���: ");
		scanf("%lf", &std_list[i].grade);
	}
	
	for(i = 0; i < SIZE; i++)
	{
		printf("�й�: %d, �̸�: %s, ����: %.1f\n", &std_list[i].number, &std_list[i].name, &std_list[i].grade);
	}
		
	return 0;
}
