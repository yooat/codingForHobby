#include <stdio.h>

int main(void)
{
	
	// 윤년: 4년 마다 윤년, 하지만, 100년 단위일 때에는 윤년이 해당되지 않음
	// 윤년 : 400년 단위일 때에는 반드시 윤년을 넣음
	
	int year = 2018;
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		printf("%d년은 윤년입니다.\n", year);
	} 
	else
	{
		printf("%d년은 윤년이 아닙니다.\n", year);
	 } 
	 
	return 0;
}
	
