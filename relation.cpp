#include <stdio.h>

int main(void)
{

	int x = -50, y = 30;
	
	int absoluteX = (x>0)? x : -x;
	
	int max = (x>y) ? x:y;
	int min = (x>y) ? y:x; 
	
	
	
	
	printf("x�� ���밪�� %d�Դϴ�.\n", absoluteX);
	printf("�ִ밪�� %d�Դϴ�.\n", max);
	printf("�ּҰ��� %d�Դϴ�.\n", min);
	
				
		
	 
	return 0;
}
