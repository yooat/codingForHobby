#include <stdio.h>

// Yoon's C p.284 Q.1
int main(void)
{
	int num = 10;
	int *ptr1 = &num;
	int *ptr2 = ptr1;
	
	(*ptr1)++;
	(*ptr2)++;
	printf("%d", num);
}
