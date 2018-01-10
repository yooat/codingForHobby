#include <stdio.h>


int comb(int n, int r)
{
	if(r==0 || r ==  n)
	{
		return 1;
	}
	else
	{
		return comb(n - 1, r - 1) + comb(n - 1, r);
	}
}

int main(void)
{
	int n, r;
	printf("n, r을 입력하세요: ");
	scanf("%d %d", &n, &r);
	 
	printf("%d", comb(n, r));
	return 0;
}
