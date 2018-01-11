#include <stdio.h>
#define NUMBER 5
// 입력 받은 다섯 개의 숫자에서, 짝수 중 최대값, 홀수 중 최대값을 각각 구하기. 
int main(void)
{
	int array[NUMBER];
	int i, oddMax, evenMax;
	oddMax = 0;
	evenMax = 0;
	
	for(i=0; i < NUMBER; i++)
	{
		scanf("%d", &array[i]);
		if(array[i]	% 2 == 0)
		{
			if(evenMax < array[i])
			{
				evenMax = array[i];
			}
		}
		else
		{
			if(oddMax < array[i])
			{
				oddMax = array[i];
			}
		}
	}
	
	printf("%d, %d", oddMax, evenMax);
	return 0;
}
