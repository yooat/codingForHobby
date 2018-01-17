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
		printf("학번을 입력하세요: ");
		scanf("%d", &std_list[i].number);
		printf("이름을 입력하세요: ");
		scanf("%s", &std_list[i].name);
		printf("학점을 입력하세요: ");
		scanf("%lf", &std_list[i].grade);
	}
	
	for(i = 0; i < SIZE; i++)
	{
		printf("학번: %d, 이름: %s, 학점: %.1f\n", &std_list[i].number, &std_list[i].name, &std_list[i].grade);
	}
		
	return 0;
}
