#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student{
	int number;
	char name[10];
	double grade;
};

int main(void)
{
	struct student s;
	
	printf("�й��� �Է��ϼ��� : ");
	scanf("%d", &s.number);
	printf("�̸��� �Է��ϼ���: ");
	scanf("%s", &s.name);
	printf("������ �Է��ϼ��� : ");
	scanf("%lf", &s.grade);
	
//	s.number = 2011113516;
//	strcpy(s.name, "Ryu");
//	s.grade = 4.5;

	printf("num: %d\n", s.number);
	printf("name: %s\n", s.name);
	printf("grade: %.1f\n", s.grade);  
	
	return 0;
}
