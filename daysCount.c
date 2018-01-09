#include <stdio.h>

int getDay(int month, int day)
{
	int i, sum = 0;
	for(i = 1; i < month; i++)
	{
		if(i == 2) // 윤년 없음을 가정 
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
	printf("달과 일을 입력하세요 :");
	scanf("%d %d", &month, &day);
	printf("1월 1일부터 해당 날짜까지의 일수는 %d일 입니다.", getDay(month, day));
	return 0;
}


