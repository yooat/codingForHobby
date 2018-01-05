#include <stdio.h>

int main(void)
{

	int x = -50, y = 30;
	
	int absoluteX = (x>0)? x : -x;
	
	int max = (x>y) ? x:y;
	int min = (x>y) ? y:x; 
	
	
	
	
	printf("x의 절대값은 %d입니다.\n", absoluteX);
	printf("최대값은 %d입니다.\n", max);
	printf("최소값은 %d입니다.\n", min);
	
				
		
	 
	return 0;
}
