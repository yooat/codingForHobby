#include <stdio.h>

int main(void)
{
	int i = 10;
	int *p = &i;
	//p = &i;
	printf("i = %d\n", i);
	*p = 20;
	printf("i = %d\n", i, *p);

	return 0;
}
