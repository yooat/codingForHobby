#include <stdio.h>

int main(void)
{
	int score = 85; 
	
	if(score >= 98)
	{
		printf("����� ������ A�Դϴ�.\n");
	}
	else if(score >= 80)
	{
		printf("����� ������ B�Դϴ�.\n");
	}
	else if(score >= 70)
	{
		printf("����� ������ C�Դϴ�.\n");
	}
	else
	{
		printf("����� ������ F�Դϴ�.\n");
	}
	
	return 0;
}
