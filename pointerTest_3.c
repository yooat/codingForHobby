#include <stdio.h>

// Yoon's C p.284 Q.2
int main(void)
{
	int num1 = 100, num2 = 20;
	int temp;
	
	int *ptr1, *ptr2; 
	ptr1 = &num1;
	ptr2 = &num2;
	
	(*ptr1) += 10;
	(*ptr2) -= 10;
	
	temp = ptr1;
	ptr1 = ptr2;
	ptr2 = temp;
	
	printf("ptr1�� ����Ű�� ������ ����� ���� %d\nptr2�� ����Ű�� ������ ����� ���� %d", *ptr1, *ptr2);
	return 0;
}
